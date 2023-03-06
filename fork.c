#define _GNU_SOURCE

#include "fork.h"

#include "axon.h"
#include "exec.h"
#include "defaultlibs.h"
#include "fd_table.h"
#include "freestanding.h"
#include "telemetry.h"

#include <sched.h>

pid_t wrapped_fork(struct thread_storage *thread)
{
	// acquire malloc lock so that the heap will be in a consistent
	// state in the child
	fs_mutex_lock(&malloc_lock);
	serialize_fd_table_for_fork();
	intptr_t result = fs_fork();
	finish_fd_table_fork();
	fs_mutex_unlock(&malloc_lock);
	if (result <= 0) {
#ifdef ENABLE_TELEMETRY
		if (enabled_telemetry & TELEMETRY_TYPE_CLONE) {
			send_clone_event(thread, fs_getpid(), 0, result);
		}
#else
		(void)thread;
#endif
		if (result == 0) {
			invalidate_self_pid();
		}
	}
	return result;
}

pid_t wrapped_vfork(struct thread_storage *thread)
{
	// acquire malloc lock so that the heap will be in a consistent
	// state in the child
	fs_mutex_lock(&malloc_lock);
	// equivalent of vfork, but without the memory sharing
	serialize_fd_table_for_fork();
	intptr_t result = FS_SYSCALL(__NR_clone, SIGCHLD|CLONE_VFORK, 0, 0, 0, 0, 0);
	finish_fd_table_fork();
	fs_mutex_unlock(&malloc_lock);
#ifdef ENABLE_TELEMETRY
	if (result <= 0 && enabled_telemetry & TELEMETRY_TYPE_CLONE) {
		send_clone_event(thread, fs_getpid(), CLONE_VFORK, result);
	}
#else
	(void)thread;
#endif
	if (result >= 0) {
		invalidate_self_pid();
		resurrect_fd_table();
	}
	return result;
}

pid_t wrapped_clone(struct thread_storage *thread, unsigned long flags, void *stack, int *parent_tid, int *child_tid, unsigned long tls)
{
	if (flags & CLONE_THREAD) {
		DIE("cannot handle spawning threads, should have been filtered by seccomp");
	}
	// acquire malloc lock so that the heap will be in a consistent
	// state in the child
	fs_mutex_lock(&malloc_lock);
	// disallow memory sharing, so our stack operations don't cause
	// corruption in the parent when vforking
	serialize_fd_table_for_fork();
	intptr_t result = FS_SYSCALL(__NR_clone, flags & ~CLONE_VM, (intptr_t)stack, (intptr_t)parent_tid, (intptr_t)child_tid, tls, 0);
	finish_fd_table_fork();
	fs_mutex_unlock(&malloc_lock);
#ifdef ENABLE_TELEMETRY
	if (result <= 0) {
		if (enabled_telemetry & TELEMETRY_TYPE_CLONE) {
			send_clone_event(thread, fs_getpid(), flags, result);
		}
	}
#else
	(void)thread;
#endif
	if (result == 0) {
		invalidate_self_pid();
		resurrect_fd_table();
	}
	return result;
}

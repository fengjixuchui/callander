SYSCALL_DEF(read, 3, SYSCALL_ARG_IS_ADDRESS(1))
SYSCALL_DEF(write, 3, SYSCALL_ARG_IS_ADDRESS(1))
SYSCALL_DEF(open, 3, SYSCALL_ARG_IS_ADDRESS(0) | SYSCALL_ARG_IS_MODEFLAGS(1))
SYSCALL_DEF(close, 1, 0)
SYSCALL_DEF(stat, 2, SYSCALL_ARG_IS_ADDRESS(0) | SYSCALL_ARG_IS_ADDRESS(1))
SYSCALL_DEF(fstat, 2, SYSCALL_ARG_IS_ADDRESS(1))
SYSCALL_DEF(lstat, 2, SYSCALL_ARG_IS_ADDRESS(0) | SYSCALL_ARG_IS_ADDRESS(1))
SYSCALL_DEF(poll, 3, SYSCALL_IS_RESTARTABLE | SYSCALL_ARG_IS_ADDRESS(0))
SYSCALL_DEF(lseek, 3, 0)
SYSCALL_DEF(mmap, 6, SYSCALL_ARG_IS_ADDRESS(0))
SYSCALL_DEF(mprotect, 3, SYSCALL_ARG_IS_ADDRESS(0))
SYSCALL_DEF(munmap, 2, SYSCALL_ARG_IS_ADDRESS(0))
SYSCALL_DEF(brk, 1, SYSCALL_ARG_IS_ADDRESS(0))
SYSCALL_DEF(rt_sigaction, 4, SYSCALL_ARG_IS_ADDRESS(1) | SYSCALL_ARG_IS_ADDRESS(2))
SYSCALL_DEF(rt_sigprocmask, 4, SYSCALL_ARG_IS_ADDRESS(1) | SYSCALL_ARG_IS_ADDRESS(2))
SYSCALL_DEF(rt_sigreturn, 1, SYSCALL_ARG_IS_ADDRESS(0))
SYSCALL_DEF(ioctl, 3, SYSCALL_ARG_IS_PRESERVED(1) | SYSCALL_ARG_IS_ADDRESS(2))
SYSCALL_DEF(pread64, 4, SYSCALL_ARG_IS_ADDRESS(1))
SYSCALL_DEF(pwrite64, 4, SYSCALL_ARG_IS_ADDRESS(1))
SYSCALL_DEF(readv, 3, SYSCALL_ARG_IS_ADDRESS(1))
SYSCALL_DEF(writev, 3, SYSCALL_ARG_IS_ADDRESS(1))
SYSCALL_DEF(access, 2, SYSCALL_ARG_IS_ADDRESS(0))
SYSCALL_DEF(pipe, 1, SYSCALL_ARG_IS_ADDRESS(1))
SYSCALL_DEF(select, 5, SYSCALL_ARG_IS_ADDRESS(1) | SYSCALL_ARG_IS_ADDRESS(2) | SYSCALL_ARG_IS_ADDRESS(3) | SYSCALL_ARG_IS_ADDRESS(4))
SYSCALL_DEF(sched_yield, 0, 0)
SYSCALL_DEF(mremap, 5, SYSCALL_ARG_IS_ADDRESS(0) | SYSCALL_ARG_IS_ADDRESS(4))
SYSCALL_DEF(msync, 3, SYSCALL_ARG_IS_ADDRESS(0))
SYSCALL_DEF(mincore, 3, SYSCALL_ARG_IS_ADDRESS(0) | SYSCALL_ARG_IS_ADDRESS(2))
SYSCALL_DEF(madvise, 3, SYSCALL_ARG_IS_ADDRESS(0))
SYSCALL_DEF(shmget, 3, 0)
SYSCALL_DEF(shmat, 3, SYSCALL_ARG_IS_ADDRESS(1))
SYSCALL_DEF(shmctl, 3, SYSCALL_ARG_IS_PRESERVED(1) | SYSCALL_ARG_IS_ADDRESS(2))
SYSCALL_DEF(dup, 1, 0)
SYSCALL_DEF(dup2, 2, 0)
SYSCALL_DEF(pause, 0, 0)
SYSCALL_DEF(nanosleep, 2, SYSCALL_IS_RESTARTABLE | SYSCALL_ARG_IS_ADDRESS(0) | SYSCALL_ARG_IS_ADDRESS(1))
SYSCALL_DEF(getitimer, 2, SYSCALL_ARG_IS_ADDRESS(1))
SYSCALL_DEF(alarm, 1, 0)
SYSCALL_DEF(setitimer, 3, SYSCALL_ARG_IS_ADDRESS(1) | SYSCALL_ARG_IS_ADDRESS(2))
SYSCALL_DEF(getpid, 0, 0)
SYSCALL_DEF(sendfile, 4, SYSCALL_ARG_IS_ADDRESS(2))
SYSCALL_DEF(socket, 3, 0)
SYSCALL_DEF(connect, 3, SYSCALL_ARG_IS_ADDRESS(1))
SYSCALL_DEF(accept, 3, SYSCALL_ARG_IS_ADDRESS(1) | SYSCALL_ARG_IS_ADDRESS(2))
SYSCALL_DEF(sendto, 6, SYSCALL_ARG_IS_ADDRESS(1) | SYSCALL_ARG_IS_ADDRESS(4))
SYSCALL_DEF(recvfrom, 6, SYSCALL_ARG_IS_ADDRESS(1) | SYSCALL_ARG_IS_ADDRESS(4) | SYSCALL_ARG_IS_ADDRESS(5))
SYSCALL_DEF(sendmsg, 3, SYSCALL_ARG_IS_ADDRESS(1))
SYSCALL_DEF(recvmsg, 3, SYSCALL_ARG_IS_ADDRESS(1))
SYSCALL_DEF(shutdown, 2, 0)
SYSCALL_DEF(bind, 3, SYSCALL_ARG_IS_ADDRESS(1))
SYSCALL_DEF(listen, 2, 0)
SYSCALL_DEF(getsockname, 3, SYSCALL_ARG_IS_ADDRESS(1) | SYSCALL_ARG_IS_ADDRESS(2))
SYSCALL_DEF(getpeername, 3, SYSCALL_ARG_IS_ADDRESS(1) | SYSCALL_ARG_IS_ADDRESS(2))
SYSCALL_DEF(socketpair, 4, SYSCALL_ARG_IS_ADDRESS(3))
SYSCALL_DEF(setsockopt, 5, SYSCALL_ARG_IS_ADDRESS(3) | SYSCALL_ARG_IS_ADDRESS(4))
SYSCALL_DEF(getsockopt, 5, SYSCALL_ARG_IS_ADDRESS(3) | SYSCALL_ARG_IS_ADDRESS(4))
SYSCALL_DEF(clone, 5, SYSCALL_ARG_IS_ADDRESS(1) | SYSCALL_ARG_IS_ADDRESS(2) | SYSCALL_ARG_IS_ADDRESS(3))
SYSCALL_DEF(fork, 0, 0)
SYSCALL_DEF(vfork, 0, 0)
SYSCALL_DEF(execve, 3, SYSCALL_ARG_IS_ADDRESS(0) | SYSCALL_ARG_IS_ADDRESS(1) | SYSCALL_ARG_IS_ADDRESS(2))
SYSCALL_DEF(exit, 1, 0)
SYSCALL_DEF(wait4, 4, SYSCALL_ARG_IS_ADDRESS(1) | SYSCALL_ARG_IS_ADDRESS(3))
SYSCALL_DEF(kill, 2, 0)
SYSCALL_DEF(uname, 1, SYSCALL_ARG_IS_ADDRESS(0))
SYSCALL_DEF(semget, 3, 0)
SYSCALL_DEF(semop, 3, SYSCALL_ARG_IS_ADDRESS(1))
SYSCALL_DEF(semctl, 4, SYSCALL_ARG_IS_ADDRESS(3))
SYSCALL_DEF(shmdt, 1, SYSCALL_ARG_IS_ADDRESS(0))
SYSCALL_DEF(msgget, 2, 0)
SYSCALL_DEF(msgsnd, 4, SYSCALL_ARG_IS_ADDRESS(1))
SYSCALL_DEF(msgrcv, 5, SYSCALL_ARG_IS_ADDRESS(1))
SYSCALL_DEF(msgctl, 3, SYSCALL_ARG_IS_ADDRESS(2))
SYSCALL_DEF(fcntl, 3, SYSCALL_ARG_IS_PRESERVED(1) | SYSCALL_ARG_IS_ADDRESS(2))
SYSCALL_DEF(flock, 2, 0)
SYSCALL_DEF(fsync, 1, 0)
SYSCALL_DEF(fdatasync, 1, 0)
SYSCALL_DEF(truncate, 2, SYSCALL_ARG_IS_ADDRESS(0))
SYSCALL_DEF(ftruncate, 2, 0)
SYSCALL_DEF(getdents, 3, 0)
SYSCALL_DEF(getcwd, 2, 0)
SYSCALL_DEF(chdir, 1, 0)
SYSCALL_DEF(fchdir, 1, 0)
SYSCALL_DEF(rename, 2, 0)
SYSCALL_DEF(mkdir, 2, 0)
SYSCALL_DEF(rmdir, 1, 0)
SYSCALL_DEF(creat, 2, 0)
SYSCALL_DEF(link, 2, 0)
SYSCALL_DEF(unlink, 1, 0)
SYSCALL_DEF(symlink, 2, 0)
SYSCALL_DEF(readlink, 3, 0)
SYSCALL_DEF(chmod, 2, 0)
SYSCALL_DEF(fchmod, 2, 0)
SYSCALL_DEF(chown, 3, 0)
SYSCALL_DEF(fchown, 3, 0)
SYSCALL_DEF(lchown, 3, 0)
SYSCALL_DEF(umask, 1, 0)
SYSCALL_DEF(gettimeofday, 2, 0)
SYSCALL_DEF(getrlimit, 2, 0)
SYSCALL_DEF(getrusage, 2, 0)
SYSCALL_DEF(sysinfo, 1, 0)
SYSCALL_DEF(times, 1, 0)
SYSCALL_DEF(ptrace, 4, SYSCALL_ARG_IS_PRESERVED(0))
SYSCALL_DEF(getuid, 0, 0)
SYSCALL_DEF(syslog, 3, 0)
SYSCALL_DEF(getgid, 0, 0)
SYSCALL_DEF(setuid, 1, SYSCALL_CAN_BE_FROM_ANYWHERE)
SYSCALL_DEF(setgid, 1, SYSCALL_CAN_BE_FROM_ANYWHERE)
SYSCALL_DEF(geteuid, 0, 0)
SYSCALL_DEF(getegid, 0, 0)
SYSCALL_DEF(setpgid, 1, SYSCALL_CAN_BE_FROM_ANYWHERE)
SYSCALL_DEF(getppid, 0, 0)
SYSCALL_DEF(getpgrp, 0, 0)
SYSCALL_DEF(setsid, 0, SYSCALL_CAN_BE_FROM_ANYWHERE)
SYSCALL_DEF(setreuid, 2, SYSCALL_CAN_BE_FROM_ANYWHERE)
SYSCALL_DEF(setregid, 2, SYSCALL_CAN_BE_FROM_ANYWHERE)
SYSCALL_DEF(getgroups, 2, 0)
SYSCALL_DEF(setgroups, 2, SYSCALL_CAN_BE_FROM_ANYWHERE)
SYSCALL_DEF(setresuid, 3, SYSCALL_CAN_BE_FROM_ANYWHERE)
SYSCALL_DEF(getresuid, 3, 0)
SYSCALL_DEF(setresgid, 3, SYSCALL_CAN_BE_FROM_ANYWHERE)
SYSCALL_DEF(getresgid, 3, 0)
SYSCALL_DEF(getpgid, 1, 0)
SYSCALL_DEF(setfsuid, 1, SYSCALL_CAN_BE_FROM_ANYWHERE)
SYSCALL_DEF(setfsgid, 1, SYSCALL_CAN_BE_FROM_ANYWHERE)
SYSCALL_DEF(getsid, 1, 0)
SYSCALL_DEF(capget, 2, 0)
SYSCALL_DEF(capset, 2, 0)
SYSCALL_DEF(rt_sigpending, 2, 0)
SYSCALL_DEF(rt_sigtimedwait, 4, 0)
SYSCALL_DEF(rt_sigqueueinfo, 3, 0)
SYSCALL_DEF(rt_sigsuspend, 2, 0)
SYSCALL_DEF(sigaltstack, 2, 0)
SYSCALL_DEF(utime, 2, 0)
SYSCALL_DEF(mknod, 3, 0)
SYSCALL_DEF(uselib, 0, 0)
SYSCALL_DEF(personality, 1, SYSCALL_ARG_IS_PRESERVED(0))
SYSCALL_DEF(ustat, 2, 0)
SYSCALL_DEF(statfs, 2, 0)
SYSCALL_DEF(fstatfs, 2, 0)
SYSCALL_DEF(sysfs, 3, 0)
SYSCALL_DEF(getpriority, 2, 0)
SYSCALL_DEF(setpriority, 3, 0)
SYSCALL_DEF(sched_setparam, 2, 0)
SYSCALL_DEF(sched_getparam, 2, 0)
SYSCALL_DEF(sched_setscheduler, 3, 0)
SYSCALL_DEF(sched_getscheduler, 1, 0)
SYSCALL_DEF(sched_get_priority_max, 1, 0)
SYSCALL_DEF(sched_get_priority_min, 1, 0)
SYSCALL_DEF(sched_rr_get_interval, 2, 0)
SYSCALL_DEF(mlock, 2, 0)
SYSCALL_DEF(munlock, 2, 0)
SYSCALL_DEF(mlockall, 1, 0)
SYSCALL_DEF(munlockall, 0, 0)
SYSCALL_DEF(vhangup, 0, 0)
SYSCALL_DEF(modify_ldt, 3, 0)
SYSCALL_DEF(pivot_root, 2, 0)
SYSCALL_DEF(_sysctl, 1, 0)
SYSCALL_DEF(prctl, 5, SYSCALL_ARG_IS_PRESERVED(0))
SYSCALL_DEF(arch_prctl, 3, 0)
SYSCALL_DEF(adjtimex, 1, 0)
SYSCALL_DEF(setrlimit, 2, SYSCALL_ARG_IS_PRESERVED(10))
SYSCALL_DEF(chroot, 1, 0)
SYSCALL_DEF(sync, 0, 0)
SYSCALL_DEF(acct, 1, 0)
SYSCALL_DEF(settimeofday, 2, 0)
SYSCALL_DEF(mount, 5, 0)
SYSCALL_DEF(umount2, 2, 0)
SYSCALL_DEF(swapon, 2, 0)
SYSCALL_DEF(swapoff, 1, 0)
SYSCALL_DEF(reboot, 4, 0)
SYSCALL_DEF(sethostname, 2, 0)
SYSCALL_DEF(setdomainname, 2, 0)
SYSCALL_DEF(iopl, 2, 0)
SYSCALL_DEF(ioperm, 3, 0)
SYSCALL_DEF(create_module, 0, 0)
SYSCALL_DEF(init_module, 3, 0)
SYSCALL_DEF(delete_module, 2, 0)
SYSCALL_DEF(get_kernel_syms, 0, 0)
SYSCALL_DEF(query_module, 0, 0)
SYSCALL_DEF(quotactl, 4, SYSCALL_ARG_IS_PRESERVED(0))
SYSCALL_DEF(nfsservctl, 0, 0)
SYSCALL_DEF(getpmsg, 0, 0)
SYSCALL_DEF(putpmsg, 0, 0)
SYSCALL_DEF(afs_syscall, 0, 0)
SYSCALL_DEF(tuxcall, 0, 0)
SYSCALL_DEF(security, 0, 0)
SYSCALL_DEF(gettid, 0, 0)
SYSCALL_DEF(readahead, 3, 0)
SYSCALL_DEF(setxattr, 5, 0)
SYSCALL_DEF(lsetxattr, 5, 0)
SYSCALL_DEF(fsetxattr, 5, 0)
SYSCALL_DEF(getxattr, 4, 0)
SYSCALL_DEF(lgetxattr, 4, 0)
SYSCALL_DEF(fgetxattr, 4, 0)
SYSCALL_DEF(listxattr, 3, 0)
SYSCALL_DEF(llistxattr, 3, 0)
SYSCALL_DEF(flistxattr, 3, 0)
SYSCALL_DEF(removexattr, 2, 0)
SYSCALL_DEF(lremovexattr, 2, 0)
SYSCALL_DEF(fremovexattr, 2, 0)
SYSCALL_DEF(tkill, 2, 0)
SYSCALL_DEF(time, 1, 0)
SYSCALL_DEF(futex, 6, SYSCALL_CAN_BE_FROM_ANYWHERE | SYSCALL_IS_RESTARTABLE)
SYSCALL_DEF(sched_setaffinity, 3, 0)
SYSCALL_DEF(sched_getaffinity, 3, 0)
SYSCALL_DEF(set_thread_area, 0, 0)
SYSCALL_DEF(io_setup, 2, 0)
SYSCALL_DEF(io_destroy, 1, 0)
SYSCALL_DEF(io_getevents, 4, 0)
SYSCALL_DEF(io_submit, 3, 0)
SYSCALL_DEF(io_cancel, 3, 0)
SYSCALL_DEF(get_thread_area, 0, 0)
SYSCALL_DEF(lookup_dcookie, 3, 0)
SYSCALL_DEF(epoll_create, 1, 0)
SYSCALL_DEF(epoll_ctl_old, 0, 0)
SYSCALL_DEF(epoll_wait_old, 0, 0)
SYSCALL_DEF(remap_file_pages, 5, 0)
SYSCALL_DEF(getdents64, 3, 0)
SYSCALL_DEF(set_tid_address, 1, 0)
SYSCALL_DEF(restart_syscall, 0, SYSCALL_CAN_BE_FROM_ANYWHERE)
SYSCALL_DEF(semtimedop, 4, 0)
SYSCALL_DEF(fadvise64, 4, 0)
SYSCALL_DEF(timer_create, 3, 0)
SYSCALL_DEF(timer_settime, 4, 0)
SYSCALL_DEF(timer_gettime, 2, 0)
SYSCALL_DEF(timer_getoverrun, 1, 0)
SYSCALL_DEF(timer_delete, 1, 0)
SYSCALL_DEF(clock_settime, 2, 0)
SYSCALL_DEF(clock_gettime, 2, SYSCALL_CAN_BE_FROM_ANYWHERE)// TODO: analyze the vDSO
SYSCALL_DEF(clock_getres, 2, 0)
SYSCALL_DEF(clock_nanosleep, 4, SYSCALL_IS_RESTARTABLE)
SYSCALL_DEF(exit_group, 1, 0)
SYSCALL_DEF(epoll_wait, 4, 0)
SYSCALL_DEF(epoll_ctl, 4, 0)
SYSCALL_DEF(tgkill, 3, 0)
SYSCALL_DEF(utimes, 2, 0)
SYSCALL_DEF(vserver, 0, 0)
SYSCALL_DEF(mbind, 6, 0)
SYSCALL_DEF(set_mempolicy, 3, 0)
SYSCALL_DEF(get_mempolicy, 5, 0)
SYSCALL_DEF(mq_open, 4, 0)
SYSCALL_DEF(mq_unlink, 1, 0)
SYSCALL_DEF(mq_timedsend, 5, 0)
SYSCALL_DEF(mq_timedreceive, 5, 0)
SYSCALL_DEF(mq_notify, 2, 0)
SYSCALL_DEF(mq_getsetattr, 3, 0)
SYSCALL_DEF(kexec_load, 4, 0)
SYSCALL_DEF(waitid, 5, 0)
SYSCALL_DEF(add_key, 4, 0)
SYSCALL_DEF(request_key, 4, 0)
SYSCALL_DEF(keyctl, 5, 0)
SYSCALL_DEF(ioprio_set, 3, 0)
SYSCALL_DEF(ioprio_get, 2, 0)
SYSCALL_DEF(inotify_init, 0, 0)
SYSCALL_DEF(inotify_add_watch, 3, 0)
SYSCALL_DEF(inotify_rm_watch, 2, 0)
SYSCALL_DEF(migrate_pages, 4, 0)
SYSCALL_DEF(openat, 4, SYSCALL_ARG_IS_ADDRESS(1) | SYSCALL_ARG_IS_MODEFLAGS(2))
SYSCALL_DEF(mkdirat, 3, SYSCALL_ARG_IS_ADDRESS(1))
SYSCALL_DEF(mknodat, 4, SYSCALL_ARG_IS_ADDRESS(1))
SYSCALL_DEF(fchownat, 5, SYSCALL_ARG_IS_ADDRESS(1))
SYSCALL_DEF(futimesat, 3, SYSCALL_ARG_IS_ADDRESS(1))
SYSCALL_DEF(newfstatat, 4, SYSCALL_ARG_IS_ADDRESS(1))
SYSCALL_DEF(unlinkat, 3, SYSCALL_ARG_IS_ADDRESS(1))
SYSCALL_DEF(renameat, 4, SYSCALL_ARG_IS_ADDRESS(1) | SYSCALL_ARG_IS_ADDRESS(3))
SYSCALL_DEF(linkat, 5, SYSCALL_ARG_IS_ADDRESS(1) | SYSCALL_ARG_IS_ADDRESS(3))
SYSCALL_DEF(symlinkat, 3, SYSCALL_ARG_IS_ADDRESS(0) | SYSCALL_ARG_IS_ADDRESS(2))
SYSCALL_DEF(readlinkat, 4, SYSCALL_ARG_IS_ADDRESS(1) | SYSCALL_ARG_IS_ADDRESS(2))
SYSCALL_DEF(fchmodat, 3, SYSCALL_ARG_IS_ADDRESS(1))
SYSCALL_DEF(faccessat, 3, SYSCALL_ARG_IS_ADDRESS(1))
SYSCALL_DEF(pselect6, 6, SYSCALL_ARG_IS_ADDRESS(1) | SYSCALL_ARG_IS_ADDRESS(2) | SYSCALL_ARG_IS_ADDRESS(3) | SYSCALL_ARG_IS_ADDRESS(4) | SYSCALL_ARG_IS_ADDRESS(5))
SYSCALL_DEF(ppoll, 5, SYSCALL_ARG_IS_ADDRESS(0))
SYSCALL_DEF(unshare, 1, 0)
SYSCALL_DEF(set_robust_list, 2, SYSCALL_ARG_IS_ADDRESS(1) | SYSCALL_ARG_IS_ADDRESS(2))
SYSCALL_DEF(get_robust_list, 3, SYSCALL_ARG_IS_ADDRESS(0))
SYSCALL_DEF(splice, 6, SYSCALL_ARG_IS_ADDRESS(1) | SYSCALL_ARG_IS_ADDRESS(3))
SYSCALL_DEF(tee, 4, 0)
SYSCALL_DEF(sync_file_range, 4, 0)
SYSCALL_DEF(vmsplice, 4, SYSCALL_ARG_IS_ADDRESS(1))
SYSCALL_DEF(move_pages, 6, SYSCALL_ARG_IS_ADDRESS(2) | SYSCALL_ARG_IS_ADDRESS(3) | SYSCALL_ARG_IS_ADDRESS(4))
SYSCALL_DEF(utimensat, 4, SYSCALL_ARG_IS_ADDRESS(1) | SYSCALL_ARG_IS_ADDRESS(2))
SYSCALL_DEF(epoll_pwait, 5, SYSCALL_ARG_IS_ADDRESS(1) | SYSCALL_ARG_IS_ADDRESS(4))
SYSCALL_DEF(signalfd, 3, 0)
SYSCALL_DEF(timerfd_create, 2, 0)
SYSCALL_DEF(eventfd, 1, 0)
SYSCALL_DEF(fallocate, 4, 0)
SYSCALL_DEF(timerfd_settime, 4, 0)
SYSCALL_DEF(timerfd_gettime, 4, 0)
SYSCALL_DEF(accept4, 2, 0)
SYSCALL_DEF(signalfd4, 4, 0)
SYSCALL_DEF(eventfd2, 4, 0)
SYSCALL_DEF(epoll_create1, 1, 0)
SYSCALL_DEF(dup3, 3, 0)
SYSCALL_DEF(pipe2, 2, 0)
SYSCALL_DEF(inotify_init1, 1, 0)
SYSCALL_DEF(preadv, 5, 0)
SYSCALL_DEF(pwritev, 5, 0)
SYSCALL_DEF(rt_tgsigqueueinfo, 4, 0)
SYSCALL_DEF(perf_event_open, 5, 0)
SYSCALL_DEF(recvmmsg, 5, 0)
SYSCALL_DEF(fanotify_init, 2, 0)
SYSCALL_DEF(fanotify_mark, 5, 0)
SYSCALL_DEF(prlimit64, 4, SYSCALL_ARG_IS_PRESERVED(1))
SYSCALL_DEF(name_to_handle_at, 5, 0)
SYSCALL_DEF(open_by_handle_at, 5, 0)
SYSCALL_DEF(clock_adjtime, 2, 0)
SYSCALL_DEF(syncfs, 1, 0)
SYSCALL_DEF(sendmmsg, 4, 0)
SYSCALL_DEF(setns, 2, 0)
SYSCALL_DEF(getcpu, 3, 0)
SYSCALL_DEF(process_vm_readv, 6, 0)
SYSCALL_DEF(process_vm_writev, 6, 0)
SYSCALL_DEF(kcmp, 5, 0)
SYSCALL_DEF(finit_module, 3, 0)
SYSCALL_DEF(sched_setattr, 3, 0)
SYSCALL_DEF(sched_getattr, 4, 0)
SYSCALL_DEF(renameat2, 5, SYSCALL_ARG_IS_ADDRESS(1) | SYSCALL_ARG_IS_ADDRESS(3))
SYSCALL_DEF(seccomp, 3, SYSCALL_ARG_IS_PRESERVED(0))
SYSCALL_DEF(getrandom, 3, 0)
SYSCALL_DEF(memfd_create, 2, 0)
SYSCALL_DEF(kexec_file_load, 5, 0)
SYSCALL_DEF(bpf, 3, SYSCALL_ARG_IS_PRESERVED(0))
SYSCALL_DEF(execveat, 5, 0)
SYSCALL_DEF(userfaultfd, 1, 0)
SYSCALL_DEF(membarrier, 2, SYSCALL_ARG_IS_PRESERVED(0))
SYSCALL_DEF(mlock2, 3, 0)
SYSCALL_DEF(copy_file_range, 6, 0)
SYSCALL_DEF(preadv2, 6, 0)
SYSCALL_DEF(pwritev2, 6, 0)
SYSCALL_DEF(pkey_mprotect, 4, 0)
SYSCALL_DEF(pkey_alloc, 2, 0)
SYSCALL_DEF(pkey_free, 1, 0)
SYSCALL_DEF(statx, 5, 0)
SYSCALL_DEF(io_pgetevents, 5, 0)
SYSCALL_DEF(rseq, 4, 0)
SYSCALL_DEF_EMPTY()
SYSCALL_DEF_EMPTY()
SYSCALL_DEF_EMPTY()
SYSCALL_DEF_EMPTY()
SYSCALL_DEF_EMPTY()
SYSCALL_DEF_EMPTY()
SYSCALL_DEF_EMPTY()
SYSCALL_DEF_EMPTY()
SYSCALL_DEF_EMPTY()
SYSCALL_DEF_EMPTY()
SYSCALL_DEF_EMPTY()
SYSCALL_DEF_EMPTY()
SYSCALL_DEF_EMPTY()
SYSCALL_DEF_EMPTY()
SYSCALL_DEF_EMPTY()
SYSCALL_DEF_EMPTY()
SYSCALL_DEF_EMPTY()
SYSCALL_DEF_EMPTY()
SYSCALL_DEF_EMPTY()
SYSCALL_DEF_EMPTY()
SYSCALL_DEF_EMPTY()
SYSCALL_DEF_EMPTY()
SYSCALL_DEF_EMPTY()
SYSCALL_DEF_EMPTY()
SYSCALL_DEF_EMPTY()
SYSCALL_DEF_EMPTY()
SYSCALL_DEF_EMPTY()
SYSCALL_DEF_EMPTY()
SYSCALL_DEF_EMPTY()
SYSCALL_DEF_EMPTY()
SYSCALL_DEF_EMPTY()
SYSCALL_DEF_EMPTY()
SYSCALL_DEF_EMPTY()
SYSCALL_DEF_EMPTY()
SYSCALL_DEF_EMPTY()
SYSCALL_DEF_EMPTY()
SYSCALL_DEF_EMPTY()
SYSCALL_DEF_EMPTY()
SYSCALL_DEF_EMPTY()
SYSCALL_DEF_EMPTY()
SYSCALL_DEF_EMPTY()
SYSCALL_DEF_EMPTY()
SYSCALL_DEF_EMPTY()
SYSCALL_DEF_EMPTY()
SYSCALL_DEF_EMPTY()
SYSCALL_DEF_EMPTY()
SYSCALL_DEF_EMPTY()
SYSCALL_DEF_EMPTY()
SYSCALL_DEF_EMPTY()
SYSCALL_DEF_EMPTY()
SYSCALL_DEF_EMPTY()
SYSCALL_DEF_EMPTY()
SYSCALL_DEF_EMPTY()
SYSCALL_DEF_EMPTY()
SYSCALL_DEF_EMPTY()
SYSCALL_DEF_EMPTY()
SYSCALL_DEF_EMPTY()
SYSCALL_DEF_EMPTY()
SYSCALL_DEF_EMPTY()
SYSCALL_DEF_EMPTY()
SYSCALL_DEF_EMPTY()
SYSCALL_DEF_EMPTY()
SYSCALL_DEF_EMPTY()
SYSCALL_DEF_EMPTY()
SYSCALL_DEF_EMPTY()
SYSCALL_DEF_EMPTY()
SYSCALL_DEF_EMPTY()
SYSCALL_DEF_EMPTY()
SYSCALL_DEF_EMPTY()
SYSCALL_DEF_EMPTY()
SYSCALL_DEF_EMPTY()
SYSCALL_DEF_EMPTY()
SYSCALL_DEF_EMPTY()
SYSCALL_DEF_EMPTY()
SYSCALL_DEF_EMPTY()
SYSCALL_DEF_EMPTY()
SYSCALL_DEF_EMPTY()
SYSCALL_DEF_EMPTY()
SYSCALL_DEF_EMPTY()
SYSCALL_DEF_EMPTY()
SYSCALL_DEF_EMPTY()
SYSCALL_DEF_EMPTY()
SYSCALL_DEF_EMPTY()
SYSCALL_DEF_EMPTY()
SYSCALL_DEF_EMPTY()
SYSCALL_DEF_EMPTY()
SYSCALL_DEF_EMPTY()
SYSCALL_DEF_EMPTY()
SYSCALL_DEF_EMPTY()
SYSCALL_DEF(pidfd_send_signal, 4, 0)
SYSCALL_DEF(io_uring_setup, 2, 0)
SYSCALL_DEF(io_uring_enter, 6, 0)
SYSCALL_DEF(io_uring_register, 4, 0)
SYSCALL_DEF(open_tree, 3, 0)
SYSCALL_DEF(move_mount, 5, 0)
SYSCALL_DEF(fsopen, 2, 0)
SYSCALL_DEF(fsconfig, 5, 0)
SYSCALL_DEF(fsmount, 3, 0)
SYSCALL_DEF(fspick, 3, 0)
SYSCALL_DEF(pidfd_open, 2, 0)
SYSCALL_DEF(clone3, 2, 0)
SYSCALL_DEF(close_range, 3, 0)
SYSCALL_DEF(openat2, 4, 0)
SYSCALL_DEF(pidfd_getfd, 3, 0)
SYSCALL_DEF(faccessat2, 4, 0)
SYSCALL_DEF(process_madvise, 5, 0)
SYSCALL_DEF(epoll_pwait2, 5, 0)
SYSCALL_DEF(mount_setattr, 5, 0)
SYSCALL_DEF(quotactl_fd, 4, 0)
SYSCALL_DEF(landlock_create_ruleset, 3, 0)
SYSCALL_DEF(landlock_add_rule, 4, 0)
SYSCALL_DEF(landlock_restrict_self, 2, 0)
SYSCALL_DEF(memfd_secret, 2, 0)
SYSCALL_DEF(process_mrelease, 2, 0)
SYSCALL_DEF(futex_waitv, 5, SYSCALL_IS_RESTARTABLE)
SYSCALL_DEF(set_mempolicy_home_node, 4, 0)

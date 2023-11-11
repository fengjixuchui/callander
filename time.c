#define _GNU_SOURCE

#include "time.h"

#include "freestanding.h"
#include "axon.h"

static int (*current_gettime)(clockid_t clk_id, struct timespec *tp);

__attribute__((visibility("hidden")))
int clock_gettime(clockid_t clk_id, struct timespec *tp)
{
	return current_gettime(clk_id, tp);
}

__attribute__((visibility("hidden")))
void clock_load(ElfW(auxv_t) *auxv)
{
	if (auxv != NULL) {
		struct binary_info info;
		load_existing(&info, auxv->a_un.a_val);
		struct symbol_info symbols;
		if (parse_dynamic_symbols(&info, (void *)auxv->a_un.a_val, &symbols) == 0) {
			void *vdso_clock_gettime = find_symbol(&info, &symbols, "__vdso_clock_gettime", NULL, NULL);
			if (vdso_clock_gettime != NULL) {
				current_gettime = vdso_clock_gettime;
				return;
			}
		}
	}
	ERROR("Falling back to syscall clock_gettime");
	current_gettime = &fs_clock_gettime;
}

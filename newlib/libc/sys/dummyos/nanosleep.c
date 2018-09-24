#include <time.h>
#include "syscall.h"

int nanosleep(const struct timespec* timeout, struct timespec* remainder)
{
	int ret;

	ret = syscall2(int, SYS_nanosleep, timeout, remainder);
	__set_errno(ret);

	return ret;
}

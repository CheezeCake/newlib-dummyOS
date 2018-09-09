#include "syscall.h"

int pipe(int fds[2])
{
	int ret;

	ret = syscall1(int, SYS_pipe, fds);
	__set_errno(ret);

	return ret;
}

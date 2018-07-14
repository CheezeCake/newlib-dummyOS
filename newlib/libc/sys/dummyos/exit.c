#include "syscall.h"

int _exit(int status)
{
	int ret;

	ret = syscall1(int, SYS_exit, status);
	__set_errno(ret);

	return ret;
}

int exit(int status)
{
	return _exit(status);
}

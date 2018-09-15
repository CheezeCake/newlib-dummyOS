#include "syscall.h"

int dup(int oldfd)
{
	int ret;

	ret = syscall1(int, SYS_dup, oldfd);
	__set_errno(ret);

	return ret;
}

int dup2(int oldfd, int newfd)
{
	int ret;

	ret = syscall2(int, SYS_dup, oldfd, newfd);
	__set_errno(ret);

	return ret;
}

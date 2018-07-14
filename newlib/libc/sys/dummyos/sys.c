#include <sys/types.h>
#include "syscall.h"

int getpid(void)
{
	pid_t ret;

	ret = syscall0(pid_t, SYS_getpid);
	__set_errno(ret);

	return ret;
}

int getppid(void)
{
	pid_t ret;

	ret = syscall0(pid_t, SYS_getppid);
	__set_errno(ret);

	return ret;
}

pid_t setsid(void)
{
	pid_t pid;

	pid = syscall0(pid_t, SYS_setsid);
	__set_errno(pid);

	return pid;
}

int setpgid(pid_t pid, pid_t pgid)
{
	int ret;

	ret = syscall2(int, SYS_setpgid, pid, pgid);
	__set_errno(ret);

	return ret;
}

pid_t getpgid(pid_t pid)
{
	pid_t ret;

	ret = syscall1(pid_t, SYS_getpgid, pid);
	__set_errno(ret);

	return ret;
}

int setpgrp(void)
{
	int ret;

	ret = syscall0(int, SYS_setpgrp);
	__set_errno(ret);

	return ret;
}

pid_t getpgrp(void)
{
	pid_t ret;

	ret = syscall0(pid_t, SYS_getpgrp);
	__set_errno(ret);

	return ret;
}

#include <sys/types.h>
#include "syscall.h"

pid_t wait(int* status)
{
	pid_t pid;

	pid = syscall1(pid_t, SYS_wait, status);
	__set_errno(pid);

	return pid;
}

pid_t waitpid(pid_t pid, int* status, int options)
{
	pid_t ret;

	ret = syscall3(pid_t, SYS_waitpid, pid, status, options);
	__set_errno(ret);

	return ret;
}

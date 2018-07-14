#include <sys/types.h>
#include <unistd.h>
#include "syscall.h"

int kill(pid_t pid, int sig)
{
	int ret;

	ret = syscall2(int, SYS_kill, pid, sig);
	__set_errno(ret);

	return ret;
}

int raise(int sig)
{
	pid_t pid;
	int ret;

	pid = getpid();
	if (pid < 0)
		return pid;

	return kill(pid, sig);
}

#include <sys/types.h>
#include "syscall.h"

pid_t fork(void)
{
	pid_t pid;

	pid = syscall0(pid_t, SYS_fork);
	__set_errno(pid);

	return pid;
}

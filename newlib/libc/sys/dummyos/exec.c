#include "syscall.h"

int _execve(const char* filename, char* const argv[], char* const envp[])
{
	int ret;

	ret = syscall3(int, SYS_execve, filename, argv, envp);
	__set_errno(ret);

	return ret;
}

#include <sys/stat.h>
#include "syscall.h"

int fstat(int fd, struct stat *st)
{
	int ret;

	ret = syscall2(int, SYS_fstat, fd, st);
	__set_errno(ret);

	return ret;
}

int stat(const char* path, struct stat* st)
{
	int ret;

	ret = syscall2(int, SYS_stat, path, st);
	__set_errno(ret);

	return ret;
}

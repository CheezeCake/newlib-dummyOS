#include <sys/types.h>
#include "syscall.h"

ssize_t getdents(int fd, struct dirent* dirp, size_t nbytes)
{
	ssize_t ret;

	ret = syscall3(ssize_t, SYS_getdents, fd, dirp, nbytes);
	__set_errno(ret);

	return ret;
}

#include <sys/types.h>
#include "syscall.h"

int open(const char* path, int flags, ...)
{
	int ret;

	ret = syscall2(int, SYS_open, path, flags);
	__set_errno(ret);

	return ret;
}

int close(int fd)
{
	int ret;

	ret = syscall1(int, SYS_close, fd);
	__set_errno(ret);

	return ret;
}

ssize_t read(int fd, void* buf, size_t n)
{
	ssize_t ret;

	ret = syscall3(ssize_t, SYS_read, fd, buf, n);
	__set_errno(ret);

	return ret;
}

ssize_t write(int fd, const void* buf, size_t n)
{
	ssize_t ret;

	ret = syscall3(ssize_t, SYS_write, fd, buf, n);
	__set_errno(ret);

	return ret;
}

off_t lseek(int fd, off_t offset, int whence)
{
	off_t ret;

	ret = syscall3(off_t, SYS_lseek, fd, offset, whence);
	__set_errno(ret);

	return ret;
}

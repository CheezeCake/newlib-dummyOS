#include <stdarg.h>
#include "syscall.h"

int ioctl(int fd, int request, ...)
{
	int ret;
	va_list ap;

	va_start(ap, request);
	ret = syscall3(int, SYS_write, fd, request, va_arg(ap, void*));
	va_end(ap);

	__set_errno(ret);

	return ret;
}

#include <stdarg.h>
#include "syscall.h"

int ioctl(int fd, int request, ...)
{
	int ret;
	va_list ap;
	void* arg;

	va_start(ap, request);
	arg = va_arg(ap, void*);
	va_end(ap);

	ret = syscall3(int, SYS_ioctl, fd, request, arg);
	__set_errno(ret);

	return ret;
}

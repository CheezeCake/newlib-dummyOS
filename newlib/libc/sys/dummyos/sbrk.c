#include <stdint.h>
#include "syscall.h"

void* sbrk(uintptr_t increment)
{
	void* ret;

	ret = syscall1(void*, SYS_sbrk, increment);
	if (ret == (void*)-1)
		errno = ENOMEM;

	return ret;
}

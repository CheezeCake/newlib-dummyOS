#ifndef _SYSCALL_H
#define _SYSCALL_H

#include <dummyos/syscall.h> /* SYS_* definitions */
#include <errno.h>

void* _syscall5(unsigned syscallno, void* arg1, void* arg2, void* arg3,
				void* arg4, void* arg5);

#define syscall0(rettype, no) \
	(rettype)_syscall5(no, 0, 0, 0, 0, 0)

#define syscall1(rettype, no, arg1) \
	(rettype)_syscall5(no, (void*)arg1, 0, 0, 0, 0)

#define syscall2(rettype, no, arg1, arg2) \
	(rettype)_syscall5(no, (void*)arg1, (void*)arg2, 0, 0, 0)

#define syscall3(rettype, no, arg1, arg2, arg3) \
	(rettype)_syscall5(no, (void*)arg1, (void*)arg2, (void*)arg3, 0, 0)

#define syscall4(rettype, no, arg1, arg2, arg3, arg4) \
	(rettype)_syscall5(no, (void*)arg1, (void*)arg2, (void*)arg3, (void*)arg4, 0)

#define syscall5(rettype, no, arg1, arg2, arg3, arg4, arg5) \
	(rettype)_syscall5(no, (void*)arg1, (void*)arg2, (void*)arg3, (void*)arg4, (void*)arg5)


#define __set_errno(err)	\
	if (err < 0) {			\
		errno = -err;		\
		err = -1;			\
	}

#endif /* _SYSCALL_H */

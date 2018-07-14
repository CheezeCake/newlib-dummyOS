/* errno is not a global variable, because that would make using it
   non-reentrant.  Instead, its address is returned by the function
   __errno.  */

#ifndef _SYS_ERRNO_H
#ifdef __cplusplus
extern "C" {
#endif
#define _SYS_ERRNO_H

#include <dummyos/errno.h>
#include <sys/reent.h>

#ifndef _REENT_ONLY
#define errno (*__errno())
extern int *__errno (void);
#endif

/* Please don't use these variables directly.
   Use strerror instead. */
extern __IMPORT const char * const _sys_errlist[];
extern __IMPORT int _sys_nerr;

#define __errno_r(ptr) ((ptr)->_errno)

#ifdef __cplusplus
}
#endif
#endif /* _SYS_ERRNO_H */

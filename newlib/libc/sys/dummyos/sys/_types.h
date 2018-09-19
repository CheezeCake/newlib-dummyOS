#ifndef	_SYS__TYPES_H
#define _SYS__TYPES_H

#include <newlib.h>
#include <sys/config.h>
#include <machine/_types.h>
#include <sys/lock.h>

#include <dummyos/types.h>

typedef blkcnt_t __blkcnt_t;

typedef blksize_t __blksize_t;

typedef fsblkcnt_t __fsblkcnt_t;

typedef fsfilcnt_t __fsfilcnt_t;

typedef off_t _off_t;

typedef pid_t __pid_t;

typedef dev_t __dev_t;

typedef uid_t __uid_t;

typedef gid_t __gid_t;

typedef id_t __id_t;

typedef ino_t __ino_t;

typedef mode_t __mode_t;

typedef int64_t _off64_t;

typedef _off_t __off_t;

typedef _off64_t __loff_t;

typedef long __key_t;

typedef off_t _fpos_t;

#ifdef __LARGE64_FILES
typedef _off64_t _fpos64_t;
#endif

/* Defined by GCC provided <stddef.h> */
#undef __size_t
typedef size_t __size_t;

typedef ssize_t _ssize_t;

typedef _ssize_t __ssize_t;

#define __need_wint_t
#include <stddef.h>

#ifndef __machine_mbstate_t_defined
/* Conversion state information.  */
typedef struct
{
  int __count;
  union
  {
    wint_t __wch;
    unsigned char __wchb[4];
  } __value;		/* Value so far.  */
} _mbstate_t;
#endif

#ifndef __machine_flock_t_defined
typedef _LOCK_RECURSIVE_T _flock_t;
#endif

#ifndef __machine_iconv_t_defined
/* Iconv descriptor type */
typedef void *_iconv_t;
#endif

#ifndef __machine_clock_t_defined
#define	_CLOCK_T_	unsigned long	/* clock() */
#endif

typedef	_CLOCK_T_	__clock_t;

typedef	time_t __time_t;
#define __time_t_defined

#define	_CLOCKID_T_ 	unsigned long
typedef	_CLOCKID_T_	__clockid_t;

#define	_TIMER_T_	unsigned long
typedef	_TIMER_T_	__timer_t;

#ifndef __machine_sa_family_t_defined
typedef	__uint8_t	__sa_family_t;
#endif

#ifndef __machine_socklen_t_defined
typedef	__uint32_t	__socklen_t;
#endif

typedef	nlink_t	__nlink_t;
typedef	long		__suseconds_t;	/* microseconds (signed) */
typedef	unsigned long	__useconds_t;	/* microseconds (unsigned) */

#ifdef __GNUCLIKE_BUILTIN_VARARGS
typedef	__builtin_va_list	__va_list;
#else
typedef	char *			__va_list;
#endif /* __GNUCLIKE_BUILTIN_VARARGS */

#endif	/* _SYS__TYPES_H */

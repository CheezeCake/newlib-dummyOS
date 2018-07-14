#ifndef _SYS_DIRENT_H
#ifdef __cplusplus
extern "C" {
#endif
#define _SYS_DIRENT_H

#include <dummyos/dirent.h>
#include <sys/lock.h>

#define HAVE_DD_LOCK

typedef struct
{
	int dd_fd;
	int dd_loc;
	int dd_seek;
	char* dd_buf;
	int dd_len;
	int dd_size;
	_LOCK_RECURSIVE_T dd_lock;
} DIR;

#define __dirfd(dir)	(dir)->dd_fd

DIR* opendir(const char* name);
struct dirent* readdir(DIR* dirp);
void rewinddir(DIR* dirp);
int closedir(DIR* dirp);

#ifdef __cplusplus
}
#endif
#endif /* _SYS_DIRENT_H */

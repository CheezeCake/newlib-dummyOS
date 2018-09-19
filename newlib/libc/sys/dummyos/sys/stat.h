#ifndef _SYS_STAT_H
#ifdef __cplusplus
extern "C" {
#endif
#define _SYS_STAT_H

#include <sys/types.h>

#include <dummyos/stat.h>

#define	_IFMT	0170000	/* type of file */
#define	_IFDIR	0040000	/* directory */
#define	_IFCHR	0020000	/* character special */
#define	_IFBLK	0060000	/* block special */
#define	_IFREG	0100000	/* regular */
#define	_IFLNK	0120000	/* symbolic link */
#define	_IFSOCK	0140000	/* socket */
#define	_IFIFO	0010000	/* fifo */

#define	S_BLKSIZE  1024 /* size of a block */

#define	S_IFMT		_IFMT
#define	S_IFDIR		_IFDIR
#define	S_IFCHR		_IFCHR
#define	S_IFBLK		_IFBLK
#define	S_IFREG		_IFREG
#define	S_IFLNK		_IFLNK
#define	S_IFSOCK	_IFSOCK
#define	S_IFIFO		_IFIFO

#define ACCESSPERMS (S_IRWXU | S_IRWXG | S_IRWXO) /* 0777 */
#define ALLPERMS (S_ISUID | S_ISGID | S_ISVTX | S_IRWXU | S_IRWXG | S_IRWXO) /* 07777 */
#define DEFFILEMODE (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH | S_IWOTH) /* 0666 */

#define	S_ISBLK(m)	(((m)&_IFMT) == _IFBLK)
#define	S_ISCHR(m)	(((m)&_IFMT) == _IFCHR)
#define	S_ISDIR(m)	(((m)&_IFMT) == _IFDIR)
#define	S_ISFIFO(m)	(((m)&_IFMT) == _IFIFO)
#define	S_ISREG(m)	(((m)&_IFMT) == _IFREG)
#define	S_ISLNK(m)	(((m)&_IFMT) == _IFLNK)
#define	S_ISSOCK(m)	(((m)&_IFMT) == _IFSOCK)

int chmod(const char *path, mode_t mode);
int fchmod(int fd, mode_t mode);
int	fstat(int fd, struct stat *sbuf);
int	mkdir(const char *path, mode_t mode);
int	mkfifo(const char *path, mode_t mode);
int	stat(const char *restrict path, struct stat *restrict sbuf);
mode_t umask(mode_t mask);

#ifdef __cplusplus
}
#endif
#endif /* _SYS_STAT_H */

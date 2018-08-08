#ifndef _SYS_IOCTL_H
#define _SYS_IOCTL_H

#include <dummyos/ioctl.h>

int ioctl(int fd, int request, ... /* arg */);

#endif

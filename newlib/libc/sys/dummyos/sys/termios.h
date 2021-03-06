#ifndef _SYS_TERMIOS_H
#ifdef __cplusplus
extern "C" {
#endif
#define _SYS_TERMIOS_H

#include <dummyos/termios.h>

speed_t cfgetispeed(const struct termios *);
speed_t cfgetospeed(const struct termios *);
int cfsetispeed(struct termios *, speed_t);
int cfsetospeed(struct termios *, speed_t);
int tcdrain(int);
int tcflow(int, int);
int tcflush(int, int);
int tcgetattr(int, struct termios *);

pid_t tcgetsid(int);

int tcsendbreak(int, int);
int tcsetattr(int, int, const struct termios *);

#ifdef __cplusplus
}
#endif
#endif /* _SYS_TERMIOS_H */

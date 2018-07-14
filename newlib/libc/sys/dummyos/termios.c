#include <errno.h>
#include <sys/types.h>
#include <termios.h>

speed_t cfgetispeed(const struct termios *t)
{
	errno = ENOSYS;
	return -1;
}

speed_t cfgetospeed(const struct termios *t)
{
	errno = ENOSYS;
	return -1;
}

int cfsetispeed(struct termios *t, speed_t speed)
{
	errno = ENOSYS;
	return -1;
}

int cfsetospeed(struct termios *t, speed_t speed)
{
	errno = ENOSYS;
	return -1;
}

int tcdrain(int fd)
{
	errno = ENOSYS;
	return -1;
}

int tcflow(int fd, int action)
{
	errno = ENOSYS;
	return -1;
}

int tcflush(int fd, int queue_selector)
{
	errno = ENOSYS;
	return -1;
}

int tcgetattr(int fd, struct termios *t)
{
	errno = ENOSYS;
	return -1;
}


pid_t tcgetsid(int fd)
{
	errno = ENOSYS;
	return -1;
}


int tcsendbreak(int fd, int duration)
{
	errno = ENOSYS;
	return -1;
}

int tcsetattr(int fd, int optional_actions, const struct termios *t)
{
	errno = ENOSYS;
	return -1;
}

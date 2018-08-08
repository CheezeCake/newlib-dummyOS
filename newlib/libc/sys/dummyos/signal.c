#include <unistd.h>
#include <signal.h>
#include "syscall.h"

int kill(pid_t pid, int sig)
{
	int ret;

	ret = syscall2(int, SYS_kill, pid, sig);
	__set_errno(ret);

	return ret;
}

sighandler_t signal(int sig, sighandler_t handler)
{
	sighandler_t ret;

	ret = syscall2(sighandler_t, SYS_signal, sig, handler);
	if (ret == SIG_ERR)
		errno = EINVAL;

	return ret;
}

int sigaction(int sig, const struct sigaction* act, struct sigaction* oact)
{
	int ret;

	ret = syscall3(int, SYS_sigaction, sig, act, oact);
	__set_errno(ret);

	return ret;
}

int sigprocmask(int how, const sigset_t* set, sigset_t* oset)
{
	int ret;

	ret = syscall3(int, SYS_sigprocmask, how, set, oset);
	__set_errno(ret);

	return ret;
}

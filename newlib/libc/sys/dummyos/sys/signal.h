#ifndef _SYS_SIGNAL_H
#ifdef __cplusplus
extern "C" {
#endif
#define _SYS_SIGNAL_H

#include <sys/types.h>
#include <dummyos/signal.h>

typedef sighandler_t _sig_func_ptr;

int kill(pid_t pid, int sig);
sighandler_t signal(int sig, sighandler_t handler);
int sigaction(int sig, const struct sigaction* act, struct sigaction* oact);

#define SIG_SETMASK		0		/* Set mask with sigprocmask() */
#define SIG_BLOCK		1		/* Set of signals to block */
#define SIG_UNBLOCK		2		/* Set of signals to, well, unblock */

#ifdef __cplusplus
}
#endif
#endif /* _SYS_SIGNAL_H */

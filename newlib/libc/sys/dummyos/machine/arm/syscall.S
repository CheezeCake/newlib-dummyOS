.global _syscall5

/*
 * void* _syscall5(unsigned syscallno, void* arg1, void* arg2, void* arg3,
 *                 void* arg4, void* arg5)
 */
 _syscall5:
	push {r11, lr}
	swi 0x0
	pop {r11, pc}

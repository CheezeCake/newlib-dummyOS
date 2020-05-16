.text

.global _start

.extern main
.extern exit
.extern environ

/*
	stack setup by the kernel:
		environ
		argv
		argc	<--- sp
*/
_start:
	ldmfd sp, {r0-r2}
	ldr r3, =environ
	str r2, [r3]

	/* align stack */
	bic sp, sp, #0x7

	bl main
	bl exit

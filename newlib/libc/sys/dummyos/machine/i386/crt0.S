.text

.global _start

.extern main
.extern exit
.extern environ

/*
	stack setup by the kernel:
		environ
		argv
		argc	<--- esp
*/
_start:
	movl 8(%esp), %eax
	movl %eax, environ

	call main

	pushl %eax
	call exit

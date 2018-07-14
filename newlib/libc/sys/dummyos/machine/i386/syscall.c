void* _syscall5(unsigned syscallno, void* arg1, void* arg2, void* arg3,
				void* arg4, void* arg5)
{
	void* ret;

	__asm__ ("int $0x80			\n"
			 "movl %%eax, %0	\n"
			 : "=r" (ret)
			 : "a" (syscallno), "b" (arg1), "c" (arg2), "d" (arg3), "S" (arg4), "D" (arg5));

	return ret;

}

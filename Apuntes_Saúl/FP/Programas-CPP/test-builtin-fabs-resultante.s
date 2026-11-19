	.file	"test.cpp"
	.text
	.section	.text.startup,"ax",@progbits
	.p2align 4
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	movl	$-1, -4(%rsp)
	pxor	%xmm0, %xmm0
	cvtsi2sdl	-4(%rsp), %xmm0
	andpd	.LC0(%rip), %xmm0
	cvttsd2sil	%xmm0, %eax
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.section	.rodata.cst16,"aM",@progbits,16
	.align 16
.LC0:
	.long	-1
	.long	2147483647
	.long	0
	.long	0
	.ident	"GCC: (GNU) 16.2.1 20260810"
	.section	.note.GNU-stack,"",@progbits

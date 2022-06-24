	.file	"mat_vec.c"
	.text
	.p2align 4
	.globl	mat_vec
	.type	mat_vec, @function
mat_vec:
.LFB22:
	.cfi_startproc
	movq	%rsi, %r11
	testl	%ecx, %ecx
	jle	.L1
	movslq	%ecx, %r8
	leal	-1(%rcx), %eax
	pxor	%xmm2, %xmm2
	xorl	%r10d, %r10d
	salq	$3, %r8
	leaq	8(%rsi,%rax,8), %r9
	.p2align 4,,10
	.p2align 3
.L4:
	movq	$0x000000000, (%rdx)
	movq	%r11, %rax
	movq	%rdi, %rsi
	movapd	%xmm2, %xmm1
	.p2align 4,,10
	.p2align 3
.L3:
	movsd	(%rsi), %xmm0
	mulsd	(%rax), %xmm0
	addq	$8, %rax
	addq	%r8, %rsi
	addsd	%xmm0, %xmm1
	movsd	%xmm1, (%rdx)
	cmpq	%rax, %r9
	jne	.L3
	addl	$1, %r10d
	addq	$8, %rdx
	addq	$8, %rdi
	cmpl	%r10d, %ecx
	jne	.L4
.L1:
	ret
	.cfi_endproc
.LFE22:
	.size	mat_vec, .-mat_vec
	.ident	"GCC: (GNU) 11.2.0"
	.section	.note.GNU-stack,"",@progbits

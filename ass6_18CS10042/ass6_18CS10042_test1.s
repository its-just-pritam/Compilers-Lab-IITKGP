	.file	"output.s"

.STR0:	.string "Binomial Coefficient program: \n"
.STR1:	.string "Enter the vaule of n: \n"
.STR2:	.string "Enter the vaule of r: \n"
.STR3:	.string "Binomial Coefficient is: "
.STR4:	.string "\n"
	.text
	.globl	binCoeff
	.type	binCoeff, @function
binCoeff:
.LFB0:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$100, %rsp
	movl	%edi, -4(%rbp)
	movl	%esi, -8(%rbp)
# 0:res = t000 
	movl	$1, -24(%rbp)
# 1:res = ans arg1 = t000 
	movl	-24(%rbp), %eax
	movl	%eax, -20(%rbp)
# 2:res = t001 arg1 = t000 
	movl	-24(%rbp), %eax
	movl	%eax, -28(%rbp)
# 3:res = t002 
	movl	$1, -32(%rbp)
# 4:res = t003 arg1 = r arg2 = t002 
	movl	-4(%rbp), %eax
	movl	-32(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -36(%rbp)
# 5:res = i arg1 = t003 
	movl	-36(%rbp), %eax
	movl	%eax, -12(%rbp)
# 6:res = t004 arg1 = t003 
	movl	-36(%rbp), %eax
	movl	%eax, -40(%rbp)
# 7:res = t005 
.L3:
	movl	$1, -44(%rbp)
# 8:res = t006 arg1 = n arg2 = t005 
	movl	-8(%rbp), %eax
	movl	-44(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -48(%rbp)
# 9:arg1 = i arg2 = t006 
	movl	-12(%rbp), %eax
	movl	-48(%rbp), %edx
	cmpl	%edx, %eax
	jl .L1
# 10:
	jmp .L2
# 11:
	jmp .L2
# 12:res = t007 
.L4:
	movl	$1, -52(%rbp)
# 13:res = t008 arg1 = i arg2 = t007 
	movl	-12(%rbp), %eax
	movl	-52(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -56(%rbp)
# 14:res = i arg1 = t008 
	movl	-56(%rbp), %eax
	movl	%eax, -12(%rbp)
# 15:res = t009 arg1 = t008 
	movl	-56(%rbp), %eax
	movl	%eax, -60(%rbp)
# 16:
	jmp .L3
# 17:res = t010 arg1 = ans arg2 = i 
.L1:
	movl	-20(%rbp), %eax
	imull	-12(%rbp), %eax
	movl	%eax, -64(%rbp)
# 18:res = ans arg1 = t010 
	movl	-64(%rbp), %eax
	movl	%eax, -20(%rbp)
# 19:res = t011 arg1 = t010 
	movl	-64(%rbp), %eax
	movl	%eax, -68(%rbp)
# 20:
	jmp .L4
# 21:res = t012 arg1 = n arg2 = r 
.L2:
	movl	-8(%rbp), %eax
	movl	-4(%rbp), %edx
	subl	%edx, %eax
	movl	%eax, -72(%rbp)
# 22:res = j arg1 = t012 
	movl	-72(%rbp), %eax
	movl	%eax, -16(%rbp)
# 23:res = t013 arg1 = t012 
	movl	-72(%rbp), %eax
	movl	%eax, -76(%rbp)
# 24:res = t014 
.L7:
	movl	$1, -80(%rbp)
# 25:arg1 = j arg2 = t014 
	movl	-16(%rbp), %eax
	movl	-80(%rbp), %edx
	cmpl	%edx, %eax
	jg .L5
# 26:
	jmp .L6
# 27:
	jmp .L6
# 28:res = t015 
.L8:
	movl	$1, -84(%rbp)
# 29:res = t016 arg1 = j arg2 = t015 
	movl	-16(%rbp), %eax
	movl	-84(%rbp), %edx
	subl	%edx, %eax
	movl	%eax, -88(%rbp)
# 30:res = j arg1 = t016 
	movl	-88(%rbp), %eax
	movl	%eax, -16(%rbp)
# 31:res = t017 arg1 = t016 
	movl	-88(%rbp), %eax
	movl	%eax, -92(%rbp)
# 32:
	jmp .L7
# 33:res = t018 arg1 = ans arg2 = j 
.L5:
	movl	-20(%rbp), %eax
	cltd
	idivl	-16(%rbp), %eax
	movl	%eax, -96(%rbp)
# 34:res = ans arg1 = t018 
	movl	-96(%rbp), %eax
	movl	%eax, -20(%rbp)
# 35:res = t019 arg1 = t018 
	movl	-96(%rbp), %eax
	movl	%eax, -100(%rbp)
# 36:
	jmp .L8
# 37:res = ans 
.L6:
	movl	-20(%rbp), %eax
	jmp	.LRT0
.LRT0:
	addq	$-100, %rsp
	movq	%rbp, %rsp
	popq	%rbp
	ret
.LFE0:
	.size	binCoeff, .-binCoeff
	.globl	main
	.type	main, @function
main:
.LFB1:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$88, %rsp
# 38:res = t020 
	movl	$0, -20(%rbp)
# 39:res = err arg1 = t020 
	movl	-20(%rbp), %eax
	movl	%eax, -16(%rbp)
# 40:
	movq	$.STR0,	%rdi
# 41:res = t021 
	pushq %rbp
	call	printStr
	movl	%eax, -24(%rbp)
	addq $8 , %rsp
# 42:
	movq	$.STR1,	%rdi
# 43:res = t022 
	pushq %rbp
	call	printStr
	movl	%eax, -28(%rbp)
	addq $8 , %rsp
# 44:res = t023 arg1 = err 
	leaq	-16(%rbp), %rax
	movq	%rax, -36(%rbp)
# 45:res = t023 
# 46:res = t024 
	pushq %rbp
	movq	-36(%rbp), %rdi
	call	readInt
	movl	%eax, -40(%rbp)
	addq $0 , %rsp
# 47:res = n arg1 = t024 
	movl	-40(%rbp), %eax
	movl	%eax, -4(%rbp)
# 48:res = t025 arg1 = t024 
	movl	-40(%rbp), %eax
	movl	%eax, -44(%rbp)
# 49:
	movq	$.STR2,	%rdi
# 50:res = t026 
	pushq %rbp
	call	printStr
	movl	%eax, -48(%rbp)
	addq $8 , %rsp
# 51:res = t027 arg1 = err 
	leaq	-16(%rbp), %rax
	movq	%rax, -56(%rbp)
# 52:res = t027 
# 53:res = t028 
	pushq %rbp
	movq	-56(%rbp), %rdi
	call	readInt
	movl	%eax, -60(%rbp)
	addq $0 , %rsp
# 54:res = r arg1 = t028 
	movl	-60(%rbp), %eax
	movl	%eax, -8(%rbp)
# 55:res = t029 arg1 = t028 
	movl	-60(%rbp), %eax
	movl	%eax, -64(%rbp)
# 56:res = n 
# 57:res = r 
# 58:res = t030 
	pushq %rbp
	movl	-8(%rbp) , %edi
	movl	-4(%rbp) , %esi
	call	binCoeff
	movl	%eax, -68(%rbp)
	addq $0 , %rsp
# 59:res = ans arg1 = t030 
	movl	-68(%rbp), %eax
	movl	%eax, -12(%rbp)
# 60:res = t031 arg1 = t030 
	movl	-68(%rbp), %eax
	movl	%eax, -72(%rbp)
# 61:
	movq	$.STR3,	%rdi
# 62:res = t032 
	pushq %rbp
	call	printStr
	movl	%eax, -76(%rbp)
	addq $8 , %rsp
# 63:res = ans 
# 64:res = t033 
	pushq %rbp
	movl	-12(%rbp) , %edi
	call	printInt
	movl	%eax, -80(%rbp)
	addq $0 , %rsp
# 65:
	movq	$.STR4,	%rdi
# 66:res = t034 
	pushq %rbp
	call	printStr
	movl	%eax, -84(%rbp)
	addq $8 , %rsp
# 67:res = t035 
	movl	$0, -88(%rbp)
# 68:res = t035 
	movl	-88(%rbp), %eax
	jmp	.LRT1
.LRT1:
	addq	$-88, %rsp
	movq	%rbp, %rsp
	popq	%rbp
	ret
.LFE1:
	.size	main, .-main

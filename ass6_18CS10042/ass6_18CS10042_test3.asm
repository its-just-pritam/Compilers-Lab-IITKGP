	.file	"output.s"

.STR0:	.string "Program to handle global variables\n"
.STR1:	.string "Test = "
.STR2:	.string "\n"
	.globl	global_1
	.data
	.align 4
	.type	global_1, @object
	.size	global_1 ,4
global_1:
	.long 96
	.globl	global_2
	.data
	.align 4
	.type	global_2, @object
	.size	global_2 ,4
global_2:
	.long 23
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$44, %rsp
# 4:
	movq	$.STR0,	%rdi
# 5:res = t002 
	pushq %rbp
	call	printStr
	movl	%eax, -4(%rbp)
	addq $8 , %rsp
# 6:res = t003 
	movl	$2, -12(%rbp)
# 7:res = t004 arg2 = t003 
	movl	global_2(%rip), %eax
	imull	-12(%rbp), %eax
	movl	%eax, -16(%rbp)
# 8:res = test arg1 = t004 
	movl	-16(%rbp), %eax
	movl	%eax, -8(%rbp)
# 9:res = t005 arg1 = t004 
	movl	-16(%rbp), %eax
	movl	%eax, -20(%rbp)
# 10:res = t006 arg1 = test 
	movl	-8(%rbp), %eax
	movl	%eax, -24(%rbp)
# 11:res = test arg1 = test 
	movl	-8(%rbp), %eax
	movl	$1, %edx
	addl	%edx, %eax
	movl	%eax, -8(%rbp)
# 12:res = t007 arg1 = test 
	movl	global_1(%rip), %edx
	movl	-8(%rbp), %eax
	addl	%edx, %eax
	movl	%eax, -28(%rbp)
# 13:res = test arg1 = t007 
	movl	-28(%rbp), %eax
	movl	%eax, -8(%rbp)
# 14:res = t008 arg1 = t007 
	movl	-28(%rbp), %eax
	movl	%eax, -32(%rbp)
# 15:
	movq	$.STR1,	%rdi
# 16:res = t009 
	pushq %rbp
	call	printStr
	movl	%eax, -36(%rbp)
	addq $8 , %rsp
# 17:res = test 
# 18:res = t010 
	pushq %rbp
	movl	-8(%rbp) , %edi
	call	printInt
	movl	%eax, -40(%rbp)
	addq $0 , %rsp
# 19:
	movq	$.STR2,	%rdi
# 20:res = t011 
	pushq %rbp
	call	printStr
	movl	%eax, -44(%rbp)
	addq $8 , %rsp
.LRT0:
	addq	$-44, %rsp
	movq	%rbp, %rsp
	popq	%rbp
	ret
.LFE0:
	.size	main, .-main

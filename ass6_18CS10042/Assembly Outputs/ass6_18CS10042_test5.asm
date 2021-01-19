	.file	"output.s"

.STR0:	.string "Handling pointers: \n"
.STR1:	.string "NO\n"
.STR2:	.string "YES\n"
.STR3:	.string "\n"
.STR4:	.string "\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$117, %rsp
# 0:
	movq	$.STR0,	%rdi
# 1:res = t000 
	pushq %rbp
	call	printStr
	movl	%eax, -4(%rbp)
	addq $8 , %rsp
# 2:res = t001 
	movb	$66, -6(%rbp)
# 3:res = c arg1 = t001 
	movzbl	-6(%rbp), %eax
	movb	%al, -5(%rbp)
# 4:res = t002 arg1 = c 
	leaq	-5(%rbp), %rax
	movq	%rax, -22(%rbp)
# 5:res = d arg1 = t002 
	movq	-22(%rbp), %rax
	movq	%rax, -14(%rbp)
# 6:res = t003 arg1 = t002 
	movq	-22(%rbp), %rax
	movq	%rax, -30(%rbp)
# 7:res = t004 
	movb	$74, -31(%rbp)
# 8:res = d arg1 = t004 
	movq	-14(%rbp), %rax
	movl	-31(%rbp), %edx
	movl	%edx, (%rax)
# 9:res = t005 arg1 = t004 
	movzbl	-31(%rbp), %eax
	movb	%al, -32(%rbp)
# 10:res = t006 
	movb	$74, -33(%rbp)
# 11:arg1 = c arg2 = t006 
	movzbl	-5(%rbp), %eax
	cmpb	-33(%rbp), %al
	jne .L1
# 12:
	jmp .L2
# 13:
	jmp .L3
# 14:
.L1:
	movq	$.STR1,	%rdi
# 15:res = t007 
	pushq %rbp
	call	printStr
	movl	%eax, -37(%rbp)
	addq $8 , %rsp
# 16:
	jmp .L3
# 17:
.L2:
	movq	$.STR2,	%rdi
# 18:res = t008 
	pushq %rbp
	call	printStr
	movl	%eax, -41(%rbp)
	addq $8 , %rsp
# 19:
	jmp .L3
# 20:res = t009 
.L3:
	movl	$4, -57(%rbp)
# 21:res = i arg1 = t009 
	movl	-57(%rbp), %eax
	movl	%eax, -53(%rbp)
# 22:res = t010 arg1 = i 
	leaq	-53(%rbp), %rax
	movq	%rax, -65(%rbp)
# 23:res = p arg1 = t010 
	movq	-65(%rbp), %rax
	movq	%rax, -49(%rbp)
# 24:res = t011 arg1 = t010 
	movq	-65(%rbp), %rax
	movq	%rax, -73(%rbp)
# 25:res = t012 
	movl	$2, -77(%rbp)
# 26:res = p arg1 = t012 
	movq	-49(%rbp), %rax
	movl	-77(%rbp), %edx
	movl	%edx, (%rax)
# 27:res = t013 arg1 = t012 
	movl	-77(%rbp), %eax
	movl	%eax, -81(%rbp)
# 28:res = i 
# 29:res = t014 
	pushq %rbp
	movl	-53(%rbp) , %edi
	call	printInt
	movl	%eax, -85(%rbp)
	addq $0 , %rsp
# 30:
	movq	$.STR3,	%rdi
# 31:res = t015 
	pushq %rbp
	call	printStr
	movl	%eax, -89(%rbp)
	addq $8 , %rsp
# 32:res = q arg1 = p 
	movq	-49(%rbp), %rax
	movq	%rax, -97(%rbp)
# 33:res = t016 
	movl	$4, -101(%rbp)
# 34:res = q arg1 = t016 
	movq	-97(%rbp), %rax
	movl	-101(%rbp), %edx
	movl	%edx, (%rax)
# 35:res = t017 arg1 = t016 
	movl	-101(%rbp), %eax
	movl	%eax, -105(%rbp)
# 36:res = i 
# 37:res = t018 
	pushq %rbp
	movl	-53(%rbp) , %edi
	call	printInt
	movl	%eax, -109(%rbp)
	addq $0 , %rsp
# 38:
	movq	$.STR4,	%rdi
# 39:res = t019 
	pushq %rbp
	call	printStr
	movl	%eax, -113(%rbp)
	addq $8 , %rsp
# 40:res = t020 
	movl	$0, -117(%rbp)
# 41:res = t020 
	movl	-117(%rbp), %eax
	jmp	.LRT0
.LRT0:
	addq	$-117, %rsp
	movq	%rbp, %rsp
	popq	%rbp
	ret
.LFE0:
	.size	main, .-main

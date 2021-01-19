	.file	"output.s"

.STR0:	.string "Binary search prgram: \n"
.STR1:	.string "Enter the size of an array: \n"
.STR2:	.string "Enter the elements of the array in sorted order: \n"
.STR3:	.string "Enter the number to be search: \n"
.STR4:	.string "Number is found at index(STARTING FROM 1):\n"
.STR5:	.string "\n"
.STR6:	.string "Number is not found.\n"
	.text
	.globl	binary
	.type	binary, @function
binary:
.LFB0:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$120, %rsp
	movl	%edi, -4(%rbp)
	movl	%esi, -8(%rbp)
	movl	%edx, -12(%rbp)
	movl	%ecx, -16(%rbp)
	movq	%r8, -24(%rbp)
# 0:res = t000 
	movl	$0, -36(%rbp)
# 1:res = c arg1 = t000 
	movl	-36(%rbp), %eax
	movl	%eax, -32(%rbp)
# 2:res = t001 arg1 = t000 
	movl	-36(%rbp), %eax
	movl	%eax, -40(%rbp)
# 3:arg1 = u arg2 = l 
	movl	-4(%rbp), %eax
	movl	-8(%rbp), %edx
	cmpl	%edx, %eax
	jl .L1
# 4:
	jmp .L2
# 5:
	jmp .L2
# 6:res = t002 
.L1:
	movl	$2, -44(%rbp)
# 7:res = t003 arg1 = t002 
	movl	-44(%rbp), %eax
	negl	%eax
	movl	%eax, -48(%rbp)
# 8:res = t003 
	movl	-48(%rbp), %eax
	jmp	.LRT0
# 9:
	jmp .L2
# 10:res = t004 arg1 = l arg2 = u 
.L2:
	movl	-8(%rbp), %eax
	movl	-4(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -52(%rbp)
# 11:res = t005 
	movl	$2, -56(%rbp)
# 12:res = t006 arg1 = t004 arg2 = t005 
	movl	-52(%rbp), %eax
	cltd
	idivl	-56(%rbp), %eax
	movl	%eax, -60(%rbp)
# 13:res = mid arg1 = t006 
	movl	-60(%rbp), %eax
	movl	%eax, -28(%rbp)
# 14:res = t007 arg1 = t006 
	movl	-60(%rbp), %eax
	movl	%eax, -64(%rbp)
# 15:res = t008 
	movl	$0, -72(%rbp)
# 16:res = t010 arg1 = mid 
	movl	-28(%rbp), %eax
	movl	$4, %ecx
	imull	%ecx, %eax
	movl	%eax, -80(%rbp)
# 17:res = t009 arg1 = t008 arg2 = t010 
	movl	-72(%rbp), %eax
	movl	-80(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -76(%rbp)
# 18:res = t011 arg1 = a arg2 = t009 
	movq	-24(%rbp), %rdx
	movslq	-76(%rbp), %rax
	addq	%rax, %rdx
	movl	(%rdx), %eax
	movl	%eax, -84(%rbp)
# 19:res = t arg1 = t011 
	movl	-84(%rbp), %eax
	movl	%eax, -68(%rbp)
# 20:res = t012 arg1 = t011 
	movl	-84(%rbp), %eax
	movl	%eax, -88(%rbp)
# 21:arg1 = t arg2 = m 
	movl	-68(%rbp), %eax
	movl	-12(%rbp), %edx
	cmpl	%edx, %eax
	jg .L3
# 22:
	jmp .L4
# 23:
	jmp	.LRT0
# 24:res = t013 
.L3:
	movl	$0, -92(%rbp)
# 25:res = t014 
	movl	$1, -96(%rbp)
# 26:res = t015 arg1 = mid arg2 = t014 
	movl	-28(%rbp), %eax
	movl	-96(%rbp), %edx
	subl	%edx, %eax
	movl	%eax, -100(%rbp)
# 27:res = a 
# 28:res = n 
# 29:res = m 
# 30:res = l 
# 31:res = t015 
# 32:res = t016 
	pushq %rbp
	movl	-100(%rbp) , %edi
	movl	-8(%rbp) , %esi
	movl	-12(%rbp) , %edx
	movl	-16(%rbp) , %ecx
	movq	-24(%rbp), %r8
	call	binary
	movl	%eax, -104(%rbp)
	addq $0 , %rsp
# 33:res = t016 
	movl	-104(%rbp), %eax
	jmp	.LRT0
# 34:
	jmp	.LRT0
# 35:arg1 = m arg2 = t 
.L4:
	movl	-12(%rbp), %eax
	movl	-68(%rbp), %edx
	cmpl	%edx, %eax
	jg .L6
# 36:
	jmp .L7
# 37:
	jmp .L8
# 38:res = t017 
.L6:
	movl	$0, -108(%rbp)
# 39:res = t018 
	movl	$1, -112(%rbp)
# 40:res = t019 arg1 = mid arg2 = t018 
	movl	-28(%rbp), %eax
	movl	-112(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -116(%rbp)
# 41:res = a 
# 42:res = n 
# 43:res = m 
# 44:res = t019 
# 45:res = u 
# 46:res = t020 
	pushq %rbp
	movl	-4(%rbp) , %edi
	movl	-116(%rbp) , %esi
	movl	-12(%rbp) , %edx
	movl	-16(%rbp) , %ecx
	movq	-24(%rbp), %r8
	call	binary
	movl	%eax, -120(%rbp)
	addq $0 , %rsp
# 47:res = t020 
	movl	-120(%rbp), %eax
	jmp	.LRT0
# 48:
	jmp	.LRT0
# 49:arg1 = m arg2 = t 
.L7:
	movl	-12(%rbp), %eax
	movl	-68(%rbp), %edx
	cmpl	%edx, %eax
	je .L9
# 50:
	jmp	.LRT0
# 51:
	jmp .L10
# 52:res = mid 
.L9:
	movl	-28(%rbp), %eax
	jmp	.LRT0
# 53:
	jmp	.LRT0
# 54:
.L10:
	jmp	.LRT0
# 55:
.L8:
	jmp	.LRT0
.LRT0:
	addq	$-120, %rsp
	movq	%rbp, %rsp
	popq	%rbp
	ret
.LFE0:
	.size	binary, .-binary
	.globl	main
	.type	main, @function
main:
.LFB1:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$244, %rsp
# 56:res = t021 
.L5:
	movl	$10, -44(%rbp)
# 57:res = t022 
	movl	$0, -72(%rbp)
# 58:res = l arg1 = t022 
	movl	-72(%rbp), %eax
	movl	%eax, -64(%rbp)
# 59:res = t023 arg1 = t022 
	movl	-72(%rbp), %eax
	movl	%eax, -76(%rbp)
# 60:res = t024 
	movl	$0, -80(%rbp)
# 61:res = c arg1 = t024 
	movl	-80(%rbp), %eax
	movl	%eax, -60(%rbp)
# 62:res = t025 arg1 = t024 
	movl	-80(%rbp), %eax
	movl	%eax, -84(%rbp)
# 63:res = t026 
	movl	$0, -92(%rbp)
# 64:res = err arg1 = t026 
	movl	-92(%rbp), %eax
	movl	%eax, -88(%rbp)
# 65:
	movq	$.STR0,	%rdi
# 66:res = t027 
	pushq %rbp
	call	printStr
	movl	%eax, -96(%rbp)
	addq $8 , %rsp
# 67:
	movq	$.STR1,	%rdi
# 68:res = t028 
	pushq %rbp
	call	printStr
	movl	%eax, -100(%rbp)
	addq $8 , %rsp
# 69:res = t029 arg1 = err 
	leaq	-88(%rbp), %rax
	movq	%rax, -108(%rbp)
# 70:res = t029 
# 71:res = t030 
	pushq %rbp
	movq	-108(%rbp), %rdi
	call	readInt
	movl	%eax, -112(%rbp)
	addq $0 , %rsp
# 72:res = n arg1 = t030 
	movl	-112(%rbp), %eax
	movl	%eax, -52(%rbp)
# 73:res = t031 arg1 = t030 
	movl	-112(%rbp), %eax
	movl	%eax, -116(%rbp)
# 74:
	movq	$.STR2,	%rdi
# 75:res = t032 
	pushq %rbp
	call	printStr
	movl	%eax, -120(%rbp)
	addq $8 , %rsp
# 76:res = t033 
	movl	$0, -124(%rbp)
# 77:res = i arg1 = t033 
	movl	-124(%rbp), %eax
	movl	%eax, -48(%rbp)
# 78:res = t034 arg1 = t033 
	movl	-124(%rbp), %eax
	movl	%eax, -128(%rbp)
# 79:arg1 = i arg2 = n 
.L13:
	movl	-48(%rbp), %eax
	movl	-52(%rbp), %edx
	cmpl	%edx, %eax
	jl .L11
# 80:
	jmp .L12
# 81:
	jmp .L12
# 82:res = t035 
.L14:
	movl	$1, -132(%rbp)
# 83:res = t036 arg1 = i arg2 = t035 
	movl	-48(%rbp), %eax
	movl	-132(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -136(%rbp)
# 84:res = i arg1 = t036 
	movl	-136(%rbp), %eax
	movl	%eax, -48(%rbp)
# 85:res = t037 arg1 = t036 
	movl	-136(%rbp), %eax
	movl	%eax, -140(%rbp)
# 86:
	jmp .L13
# 87:res = t038 
.L11:
	movl	$0, -144(%rbp)
# 88:res = t040 arg1 = i 
	movl	-48(%rbp), %eax
	movl	$4, %ecx
	imull	%ecx, %eax
	movl	%eax, -152(%rbp)
# 89:res = t039 arg1 = t038 arg2 = t040 
	movl	-144(%rbp), %eax
	movl	-152(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -148(%rbp)
# 90:res = t041 arg1 = err 
	leaq	-88(%rbp), %rax
	movq	%rax, -160(%rbp)
# 91:res = t041 
# 92:res = t042 
	pushq %rbp
	movq	-160(%rbp), %rdi
	call	readInt
	movl	%eax, -164(%rbp)
	addq $0 , %rsp
# 93:res = a arg1 = t039 arg2 = t042 
	leaq	-40(%rbp), %rdx
	movslq	-148(%rbp), %rax
	addq	%rax, %rdx
	movl	-164(%rbp), %eax
	movl	%eax, (%rdx)
# 94:res = t043 arg1 = t042 
	movl	-164(%rbp), %eax
	movl	%eax, -168(%rbp)
# 95:
	jmp .L14
# 96:
.L12:
	movq	$.STR3,	%rdi
# 97:res = t044 
	pushq %rbp
	call	printStr
	movl	%eax, -172(%rbp)
	addq $8 , %rsp
# 98:res = t045 arg1 = err 
	leaq	-88(%rbp), %rax
	movq	%rax, -180(%rbp)
# 99:res = t045 
# 100:res = t046 
	pushq %rbp
	movq	-180(%rbp), %rdi
	call	readInt
	movl	%eax, -184(%rbp)
	addq $0 , %rsp
# 101:res = m arg1 = t046 
	movl	-184(%rbp), %eax
	movl	%eax, -56(%rbp)
# 102:res = t047 arg1 = t046 
	movl	-184(%rbp), %eax
	movl	%eax, -188(%rbp)
# 103:res = t048 
	movl	$1, -192(%rbp)
# 104:res = t049 arg1 = n arg2 = t048 
	movl	-52(%rbp), %eax
	movl	-192(%rbp), %edx
	subl	%edx, %eax
	movl	%eax, -196(%rbp)
# 105:res = u arg1 = t049 
	movl	-196(%rbp), %eax
	movl	%eax, -68(%rbp)
# 106:res = t050 arg1 = t049 
	movl	-196(%rbp), %eax
	movl	%eax, -200(%rbp)
# 107:res = t051 
	movl	$0, -204(%rbp)
# 108:res = a 
# 109:res = n 
# 110:res = m 
# 111:res = l 
# 112:res = u 
# 113:res = t052 
	pushq %rbp
	movl	-68(%rbp) , %edi
	movl	-64(%rbp) , %esi
	movl	-56(%rbp) , %edx
	movl	-52(%rbp) , %ecx
	leaq	-40(%rbp), %r8
	call	binary
	movl	%eax, -208(%rbp)
	addq $0 , %rsp
# 114:res = c arg1 = t052 
	movl	-208(%rbp), %eax
	movl	%eax, -60(%rbp)
# 115:res = t053 arg1 = t052 
	movl	-208(%rbp), %eax
	movl	%eax, -212(%rbp)
# 116:res = t054 
	movl	$2, -216(%rbp)
# 117:res = t055 arg1 = t054 
	movl	-216(%rbp), %eax
	negl	%eax
	movl	%eax, -220(%rbp)
# 118:arg1 = c arg2 = t055 
	movl	-60(%rbp), %eax
	movl	-220(%rbp), %edx
	cmpl	%edx, %eax
	jne .L15
# 119:
	jmp .L16
# 120:
	jmp .L17
# 121:
.L15:
	movq	$.STR4,	%rdi
# 122:res = t056 
	pushq %rbp
	call	printStr
	movl	%eax, -224(%rbp)
	addq $8 , %rsp
# 123:res = t057 arg1 = c 
	movl	-60(%rbp), %eax
	movl	%eax, -228(%rbp)
# 124:res = c arg1 = c 
	movl	-60(%rbp), %eax
	movl	$1, %edx
	addl	%edx, %eax
	movl	%eax, -60(%rbp)
# 125:res = c 
# 126:res = t058 
	pushq %rbp
	movl	-60(%rbp) , %edi
	call	printInt
	movl	%eax, -232(%rbp)
	addq $0 , %rsp
# 127:
	movq	$.STR5,	%rdi
# 128:res = t059 
	pushq %rbp
	call	printStr
	movl	%eax, -236(%rbp)
	addq $8 , %rsp
# 129:
	jmp .L17
# 130:
.L16:
	movq	$.STR6,	%rdi
# 131:res = t060 
	pushq %rbp
	call	printStr
	movl	%eax, -240(%rbp)
	addq $8 , %rsp
# 132:
	jmp .L17
# 133:res = t061 
.L17:
	movl	$0, -244(%rbp)
# 134:res = t061 
	movl	-244(%rbp), %eax
	jmp	.LRT1
.LRT1:
	addq	$-244, %rsp
	movq	%rbp, %rsp
	popq	%rbp
	ret
.LFE1:
	.size	main, .-main

	.file	"output.s"

.STR0:	.string "Insertion Sort\n"
.STR1:	.string "Enter the size of the array: \n"
.STR2:	.string "Enter only positive elements of the array: \n"
.STR3:	.string "Second Largest number in the array is: "
.STR4:	.string "\n"
	.text
	.globl	SecondMaxSearch
	.type	SecondMaxSearch, @function
SecondMaxSearch:
.LFB0:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$216, %rsp
	movl	%edi, -4(%rbp)
	movq	%rsi, -12(%rbp)
# 0:res = t000 
	movl	$0, -36(%rbp)
# 1:res = max arg1 = t000 
	movl	-36(%rbp), %eax
	movl	%eax, -32(%rbp)
# 2:res = t001 arg1 = t000 
	movl	-36(%rbp), %eax
	movl	%eax, -40(%rbp)
# 3:res = t002 
	movl	$0, -44(%rbp)
# 4:res = i arg1 = t002 
	movl	-44(%rbp), %eax
	movl	%eax, -16(%rbp)
# 5:res = t003 arg1 = t002 
	movl	-44(%rbp), %eax
	movl	%eax, -48(%rbp)
# 6:arg1 = i arg2 = n 
.L3:
	movl	-16(%rbp), %eax
	movl	-4(%rbp), %edx
	cmpl	%edx, %eax
	jl .L1
# 7:
	jmp .L2
# 8:
	jmp .L2
# 9:res = t004 
.L5:
	movl	$1, -52(%rbp)
# 10:res = t005 arg1 = i arg2 = t004 
	movl	-16(%rbp), %eax
	movl	-52(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -56(%rbp)
# 11:res = i arg1 = t005 
	movl	-56(%rbp), %eax
	movl	%eax, -16(%rbp)
# 12:res = t006 arg1 = t005 
	movl	-56(%rbp), %eax
	movl	%eax, -60(%rbp)
# 13:
	jmp .L3
# 14:res = t007 
.L1:
	movl	$0, -64(%rbp)
# 15:res = t009 arg1 = i 
	movl	-16(%rbp), %eax
	movl	$4, %ecx
	imull	%ecx, %eax
	movl	%eax, -72(%rbp)
# 16:res = t008 arg1 = t007 arg2 = t009 
	movl	-64(%rbp), %eax
	movl	-72(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -68(%rbp)
# 17:res = t010 arg1 = arr arg2 = t008 
	movq	-12(%rbp), %rdx
	movslq	-68(%rbp), %rax
	addq	%rax, %rdx
	movl	(%rdx), %eax
	movl	%eax, -76(%rbp)
# 18:arg1 = t010 arg2 = max 
	movl	-76(%rbp), %eax
	movl	-32(%rbp), %edx
	cmpl	%edx, %eax
	jg .L4
# 19:
	jmp .L5
# 20:
	jmp .L6
# 21:res = t011 
.L4:
	movl	$0, -80(%rbp)
# 22:res = t013 arg1 = i 
	movl	-16(%rbp), %eax
	movl	$4, %ecx
	imull	%ecx, %eax
	movl	%eax, -88(%rbp)
# 23:res = t012 arg1 = t011 arg2 = t013 
	movl	-80(%rbp), %eax
	movl	-88(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -84(%rbp)
# 24:res = t014 arg1 = arr arg2 = t012 
	movq	-12(%rbp), %rdx
	movslq	-84(%rbp), %rax
	addq	%rax, %rdx
	movl	(%rdx), %eax
	movl	%eax, -92(%rbp)
# 25:res = max arg1 = t014 
	movl	-92(%rbp), %eax
	movl	%eax, -32(%rbp)
# 26:res = t015 arg1 = t014 
	movl	-92(%rbp), %eax
	movl	%eax, -96(%rbp)
# 27:
	jmp .L5
# 28:
.L6:
	jmp .L5
# 29:res = t016 
.L2:
	movl	$0, -100(%rbp)
# 30:res = j arg1 = t016 
	movl	-100(%rbp), %eax
	movl	%eax, -20(%rbp)
# 31:res = t017 arg1 = t016 
	movl	-100(%rbp), %eax
	movl	%eax, -104(%rbp)
# 32:arg1 = j arg2 = n 
.L9:
	movl	-20(%rbp), %eax
	movl	-4(%rbp), %edx
	cmpl	%edx, %eax
	jl .L7
# 33:
	jmp .L8
# 34:
	jmp .L8
# 35:res = t018 
.L11:
	movl	$1, -108(%rbp)
# 36:res = t019 arg1 = j arg2 = t018 
	movl	-20(%rbp), %eax
	movl	-108(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -112(%rbp)
# 37:res = j arg1 = t019 
	movl	-112(%rbp), %eax
	movl	%eax, -20(%rbp)
# 38:res = t020 arg1 = t019 
	movl	-112(%rbp), %eax
	movl	%eax, -116(%rbp)
# 39:
	jmp .L9
# 40:res = t021 
.L7:
	movl	$0, -120(%rbp)
# 41:res = t023 arg1 = j 
	movl	-20(%rbp), %eax
	movl	$4, %ecx
	imull	%ecx, %eax
	movl	%eax, -128(%rbp)
# 42:res = t022 arg1 = t021 arg2 = t023 
	movl	-120(%rbp), %eax
	movl	-128(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -124(%rbp)
# 43:res = t024 arg1 = arr arg2 = t022 
	movq	-12(%rbp), %rdx
	movslq	-124(%rbp), %rax
	addq	%rax, %rdx
	movl	(%rdx), %eax
	movl	%eax, -132(%rbp)
# 44:arg1 = t024 arg2 = max 
	movl	-132(%rbp), %eax
	movl	-32(%rbp), %edx
	cmpl	%edx, %eax
	je .L10
# 45:
	jmp .L11
# 46:
	jmp .L12
# 47:res = t025 
.L10:
	movl	$0, -136(%rbp)
# 48:res = t027 arg1 = j 
	movl	-20(%rbp), %eax
	movl	$4, %ecx
	imull	%ecx, %eax
	movl	%eax, -144(%rbp)
# 49:res = t026 arg1 = t025 arg2 = t027 
	movl	-136(%rbp), %eax
	movl	-144(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -140(%rbp)
# 50:res = t028 
	movl	$0, -148(%rbp)
# 51:res = arr arg1 = t026 arg2 = t028 
	movq	-12(%rbp), %rdx
	movslq	-140(%rbp), %rax
	addq	%rax, %rdx
	movl	-148(%rbp), %eax
	movl	%eax, (%rdx)
# 52:res = t029 arg1 = t028 
	movl	-148(%rbp), %eax
	movl	%eax, -152(%rbp)
# 53:
	jmp .L11
# 54:
.L12:
	jmp .L11
# 55:res = t030 
.L8:
	movl	$0, -156(%rbp)
# 56:res = ans arg1 = t030 
	movl	-156(%rbp), %eax
	movl	%eax, -28(%rbp)
# 57:res = t031 arg1 = t030 
	movl	-156(%rbp), %eax
	movl	%eax, -160(%rbp)
# 58:res = t032 
	movl	$0, -164(%rbp)
# 59:res = k arg1 = t032 
	movl	-164(%rbp), %eax
	movl	%eax, -24(%rbp)
# 60:res = t033 arg1 = t032 
	movl	-164(%rbp), %eax
	movl	%eax, -168(%rbp)
# 61:arg1 = k arg2 = n 
.L15:
	movl	-24(%rbp), %eax
	movl	-4(%rbp), %edx
	cmpl	%edx, %eax
	jl .L13
# 62:
	jmp .L14
# 63:
	jmp .L14
# 64:res = t034 
.L17:
	movl	$1, -172(%rbp)
# 65:res = t035 arg1 = k arg2 = t034 
	movl	-24(%rbp), %eax
	movl	-172(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -176(%rbp)
# 66:res = k arg1 = t035 
	movl	-176(%rbp), %eax
	movl	%eax, -24(%rbp)
# 67:res = t036 arg1 = t035 
	movl	-176(%rbp), %eax
	movl	%eax, -180(%rbp)
# 68:
	jmp .L15
# 69:res = t037 
.L13:
	movl	$0, -184(%rbp)
# 70:res = t039 arg1 = k 
	movl	-24(%rbp), %eax
	movl	$4, %ecx
	imull	%ecx, %eax
	movl	%eax, -192(%rbp)
# 71:res = t038 arg1 = t037 arg2 = t039 
	movl	-184(%rbp), %eax
	movl	-192(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -188(%rbp)
# 72:res = t040 arg1 = arr arg2 = t038 
	movq	-12(%rbp), %rdx
	movslq	-188(%rbp), %rax
	addq	%rax, %rdx
	movl	(%rdx), %eax
	movl	%eax, -196(%rbp)
# 73:arg1 = t040 arg2 = ans 
	movl	-196(%rbp), %eax
	movl	-28(%rbp), %edx
	cmpl	%edx, %eax
	jg .L16
# 74:
	jmp .L17
# 75:
	jmp .L18
# 76:res = t041 
.L16:
	movl	$0, -200(%rbp)
# 77:res = t043 arg1 = k 
	movl	-24(%rbp), %eax
	movl	$4, %ecx
	imull	%ecx, %eax
	movl	%eax, -208(%rbp)
# 78:res = t042 arg1 = t041 arg2 = t043 
	movl	-200(%rbp), %eax
	movl	-208(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -204(%rbp)
# 79:res = t044 arg1 = arr arg2 = t042 
	movq	-12(%rbp), %rdx
	movslq	-204(%rbp), %rax
	addq	%rax, %rdx
	movl	(%rdx), %eax
	movl	%eax, -212(%rbp)
# 80:res = ans arg1 = t044 
	movl	-212(%rbp), %eax
	movl	%eax, -28(%rbp)
# 81:res = t045 arg1 = t044 
	movl	-212(%rbp), %eax
	movl	%eax, -216(%rbp)
# 82:
	jmp .L17
# 83:
.L18:
	jmp .L17
# 84:res = ans 
.L14:
	movl	-28(%rbp), %eax
	jmp	.LRT0
.LRT0:
	addq	$-216, %rsp
	movq	%rbp, %rsp
	popq	%rbp
	ret
.LFE0:
	.size	SecondMaxSearch, .-SecondMaxSearch
	.globl	main
	.type	main, @function
main:
.LFB1:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$528, %rsp
# 85:
	movq	$.STR0,	%rdi
# 86:res = t046 
	pushq %rbp
	call	printStr
	movl	%eax, -4(%rbp)
	addq $8 , %rsp
# 87:res = t047 
	movl	$100, -408(%rbp)
# 88:res = t048 
	movl	$1, -424(%rbp)
# 89:res = err arg1 = t048 
	movl	-424(%rbp), %eax
	movl	%eax, -416(%rbp)
# 90:res = t049 arg1 = t048 
	movl	-424(%rbp), %eax
	movl	%eax, -428(%rbp)
# 91:
	movq	$.STR1,	%rdi
# 92:res = t050 
	pushq %rbp
	call	printStr
	movl	%eax, -432(%rbp)
	addq $8 , %rsp
# 93:res = t051 arg1 = err 
	leaq	-416(%rbp), %rax
	movq	%rax, -440(%rbp)
# 94:res = t051 
# 95:res = t052 
	pushq %rbp
	movq	-440(%rbp), %rdi
	call	readInt
	movl	%eax, -444(%rbp)
	addq $0 , %rsp
# 96:res = n arg1 = t052 
	movl	-444(%rbp), %eax
	movl	%eax, -412(%rbp)
# 97:res = t053 arg1 = t052 
	movl	-444(%rbp), %eax
	movl	%eax, -448(%rbp)
# 98:
	movq	$.STR2,	%rdi
# 99:res = t054 
	pushq %rbp
	call	printStr
	movl	%eax, -452(%rbp)
	addq $8 , %rsp
# 100:res = t055 
	movl	$0, -456(%rbp)
# 101:res = i arg1 = t055 
	movl	-456(%rbp), %eax
	movl	%eax, -452(%rbp)
# 102:res = t056 arg1 = t055 
	movl	-456(%rbp), %eax
	movl	%eax, -460(%rbp)
# 103:arg1 = i arg2 = n 
.L21:
	movl	-452(%rbp), %eax
	movl	-412(%rbp), %edx
	cmpl	%edx, %eax
	jl .L19
# 104:
	jmp .L20
# 105:
	jmp .L20
# 106:res = t057 
.L22:
	movl	$1, -464(%rbp)
# 107:res = t058 arg1 = i arg2 = t057 
	movl	-452(%rbp), %eax
	movl	-464(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -468(%rbp)
# 108:res = i arg1 = t058 
	movl	-468(%rbp), %eax
	movl	%eax, -452(%rbp)
# 109:res = t059 arg1 = t058 
	movl	-468(%rbp), %eax
	movl	%eax, -472(%rbp)
# 110:
	jmp .L21
# 111:res = t060 
.L19:
	movl	$0, -476(%rbp)
# 112:res = t062 arg1 = i 
	movl	-452(%rbp), %eax
	movl	$4, %ecx
	imull	%ecx, %eax
	movl	%eax, -484(%rbp)
# 113:res = t061 arg1 = t060 arg2 = t062 
	movl	-476(%rbp), %eax
	movl	-484(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -480(%rbp)
# 114:res = t063 arg1 = err 
	leaq	-416(%rbp), %rax
	movq	%rax, -492(%rbp)
# 115:res = t063 
# 116:res = t064 
	pushq %rbp
	movq	-492(%rbp), %rdi
	call	readInt
	movl	%eax, -496(%rbp)
	addq $0 , %rsp
# 117:res = arr arg1 = t061 arg2 = t064 
	leaq	-404(%rbp), %rdx
	movslq	-480(%rbp), %rax
	addq	%rax, %rdx
	movl	-496(%rbp), %eax
	movl	%eax, (%rdx)
# 118:res = t065 arg1 = t064 
	movl	-496(%rbp), %eax
	movl	%eax, -500(%rbp)
# 119:
	jmp .L22
# 120:res = t066 
.L20:
	movl	$0, -504(%rbp)
# 121:res = arr 
# 122:res = n 
# 123:res = t067 
	pushq %rbp
	movl	-412(%rbp) , %edi
	leaq	-404(%rbp), %rsi
	call	SecondMaxSearch
	movl	%eax, -508(%rbp)
	addq $0 , %rsp
# 124:res = ans arg1 = t067 
	movl	-508(%rbp), %eax
	movl	%eax, -420(%rbp)
# 125:res = t068 arg1 = t067 
	movl	-508(%rbp), %eax
	movl	%eax, -512(%rbp)
# 126:
	movq	$.STR3,	%rdi
# 127:res = t069 
	pushq %rbp
	call	printStr
	movl	%eax, -516(%rbp)
	addq $8 , %rsp
# 128:res = ans 
# 129:res = t070 
	pushq %rbp
	movl	-420(%rbp) , %edi
	call	printInt
	movl	%eax, -520(%rbp)
	addq $0 , %rsp
# 130:
	movq	$.STR4,	%rdi
# 131:res = t071 
	pushq %rbp
	call	printStr
	movl	%eax, -524(%rbp)
	addq $8 , %rsp
# 132:res = t072 
	movl	$0, -528(%rbp)
# 133:res = t072 
	movl	-528(%rbp), %eax
	jmp	.LRT1
.LRT1:
	addq	$-528, %rsp
	movq	%rbp, %rsp
	popq	%rbp
	ret
.LFE1:
	.size	main, .-main

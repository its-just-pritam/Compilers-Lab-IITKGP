	.file	"output.s"

.STR0:	.string "Insertion Sort\n"
.STR1:	.string "Enter the size of the array: \n"
.STR2:	.string "Enter the elements of the array: \n"
.STR3:	.string "The sorted array is: \n"
.STR4:	.string ", "
.STR5:	.string "\n"
	.text
	.globl	InsertionSort
	.type	InsertionSort, @function
InsertionSort:
.LFB0:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$176, %rsp
	movl	%edi, -4(%rbp)
	movq	%rsi, -12(%rbp)
# 0:res = t000 
	movl	$1, -28(%rbp)
# 1:res = i arg1 = t000 
	movl	-28(%rbp), %eax
	movl	%eax, -16(%rbp)
# 2:res = t001 arg1 = t000 
	movl	-28(%rbp), %eax
	movl	%eax, -32(%rbp)
# 3:arg1 = i arg2 = n 
.L3:
	movl	-16(%rbp), %eax
	movl	-4(%rbp), %edx
	cmpl	%edx, %eax
	jl .L1
# 4:
	jmp .L2
# 5:
	jmp .L2
# 6:res = t002 
.L8:
	movl	$1, -36(%rbp)
# 7:res = t003 arg1 = i arg2 = t002 
	movl	-16(%rbp), %eax
	movl	-36(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -40(%rbp)
# 8:res = i arg1 = t003 
	movl	-40(%rbp), %eax
	movl	%eax, -16(%rbp)
# 9:res = t004 arg1 = t003 
	movl	-40(%rbp), %eax
	movl	%eax, -44(%rbp)
# 10:
	jmp .L3
# 11:res = t005 
.L1:
	movl	$0, -48(%rbp)
# 12:res = t007 arg1 = i 
	movl	-16(%rbp), %eax
	movl	$4, %ecx
	imull	%ecx, %eax
	movl	%eax, -56(%rbp)
# 13:res = t006 arg1 = t005 arg2 = t007 
	movl	-48(%rbp), %eax
	movl	-56(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -52(%rbp)
# 14:res = t008 arg1 = arr arg2 = t006 
	movq	-12(%rbp), %rdx
	movslq	-52(%rbp), %rax
	addq	%rax, %rdx
	movl	(%rdx), %eax
	movl	%eax, -60(%rbp)
# 15:res = key arg1 = t008 
	movl	-60(%rbp), %eax
	movl	%eax, -20(%rbp)
# 16:res = t009 arg1 = t008 
	movl	-60(%rbp), %eax
	movl	%eax, -64(%rbp)
# 17:res = t010 
	movl	$1, -68(%rbp)
# 18:res = t011 arg1 = i arg2 = t010 
	movl	-16(%rbp), %eax
	movl	-68(%rbp), %edx
	subl	%edx, %eax
	movl	%eax, -72(%rbp)
# 19:res = j arg1 = t011 
	movl	-72(%rbp), %eax
	movl	%eax, -24(%rbp)
# 20:res = t012 arg1 = t011 
	movl	-72(%rbp), %eax
	movl	%eax, -76(%rbp)
# 21:res = t013 
.L7:
	movl	$0, -80(%rbp)
# 22:arg1 = j arg2 = t013 
	movl	-24(%rbp), %eax
	movl	-80(%rbp), %edx
	cmpl	%edx, %eax
	jge .L4
# 23:
	jmp .L5
# 24:res = t014 
.L4:
	movl	$0, -84(%rbp)
# 25:res = t016 arg1 = j 
	movl	-24(%rbp), %eax
	movl	$4, %ecx
	imull	%ecx, %eax
	movl	%eax, -92(%rbp)
# 26:res = t015 arg1 = t014 arg2 = t016 
	movl	-84(%rbp), %eax
	movl	-92(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -88(%rbp)
# 27:res = t017 arg1 = arr arg2 = t015 
	movq	-12(%rbp), %rdx
	movslq	-88(%rbp), %rax
	addq	%rax, %rdx
	movl	(%rdx), %eax
	movl	%eax, -96(%rbp)
# 28:arg1 = t017 arg2 = key 
	movl	-96(%rbp), %eax
	movl	-20(%rbp), %edx
	cmpl	%edx, %eax
	jg .L6
# 29:
	jmp .L5
# 30:
	jmp .L5
# 31:res = t018 
.L6:
	movl	$0, -100(%rbp)
# 32:res = t019 
	movl	$1, -104(%rbp)
# 33:res = t020 arg1 = j arg2 = t019 
	movl	-24(%rbp), %eax
	movl	-104(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -108(%rbp)
# 34:res = t022 arg1 = t020 
	movl	-108(%rbp), %eax
	movl	$4, %ecx
	imull	%ecx, %eax
	movl	%eax, -116(%rbp)
# 35:res = t021 arg1 = t018 arg2 = t022 
	movl	-100(%rbp), %eax
	movl	-116(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -112(%rbp)
# 36:res = t023 
	movl	$0, -120(%rbp)
# 37:res = t025 arg1 = j 
	movl	-24(%rbp), %eax
	movl	$4, %ecx
	imull	%ecx, %eax
	movl	%eax, -128(%rbp)
# 38:res = t024 arg1 = t023 arg2 = t025 
	movl	-120(%rbp), %eax
	movl	-128(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -124(%rbp)
# 39:res = t026 arg1 = arr arg2 = t024 
	movq	-12(%rbp), %rdx
	movslq	-124(%rbp), %rax
	addq	%rax, %rdx
	movl	(%rdx), %eax
	movl	%eax, -132(%rbp)
# 40:res = arr arg1 = t021 arg2 = t026 
	movq	-12(%rbp), %rdx
	movslq	-112(%rbp), %rax
	addq	%rax, %rdx
	movl	-132(%rbp), %eax
	movl	%eax, (%rdx)
# 41:res = t027 arg1 = t026 
	movl	-132(%rbp), %eax
	movl	%eax, -136(%rbp)
# 42:res = t028 
	movl	$1, -140(%rbp)
# 43:res = t029 arg1 = j arg2 = t028 
	movl	-24(%rbp), %eax
	movl	-140(%rbp), %edx
	subl	%edx, %eax
	movl	%eax, -144(%rbp)
# 44:res = j arg1 = t029 
	movl	-144(%rbp), %eax
	movl	%eax, -24(%rbp)
# 45:res = t030 arg1 = t029 
	movl	-144(%rbp), %eax
	movl	%eax, -148(%rbp)
# 46:
	jmp .L7
# 47:res = t031 
.L5:
	movl	$0, -152(%rbp)
# 48:res = t032 
	movl	$1, -156(%rbp)
# 49:res = t033 arg1 = j arg2 = t032 
	movl	-24(%rbp), %eax
	movl	-156(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -160(%rbp)
# 50:res = t035 arg1 = t033 
	movl	-160(%rbp), %eax
	movl	$4, %ecx
	imull	%ecx, %eax
	movl	%eax, -168(%rbp)
# 51:res = t034 arg1 = t031 arg2 = t035 
	movl	-152(%rbp), %eax
	movl	-168(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -164(%rbp)
# 52:res = arr arg1 = t034 arg2 = key 
	movq	-12(%rbp), %rdx
	movslq	-164(%rbp), %rax
	addq	%rax, %rdx
	movl	-20(%rbp), %eax
	movl	%eax, (%rdx)
# 53:res = t036 arg1 = key 
	movl	-20(%rbp), %eax
	movl	%eax, -172(%rbp)
# 54:
	jmp .L8
# 55:res = t037 
.L2:
	movl	$0, -176(%rbp)
# 56:res = t037 
	movl	-176(%rbp), %eax
	jmp	.LRT0
.LRT0:
	addq	$-176, %rsp
	movq	%rbp, %rsp
	popq	%rbp
	ret
.LFE0:
	.size	InsertionSort, .-InsertionSort
	.globl	main
	.type	main, @function
main:
.LFB1:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$596, %rsp
# 57:
	movq	$.STR0,	%rdi
# 58:res = t038 
	pushq %rbp
	call	printStr
	movl	%eax, -4(%rbp)
	addq $8 , %rsp
# 59:res = t039 
	movl	$100, -408(%rbp)
# 60:res = t040 
	movl	$1, -420(%rbp)
# 61:res = err arg1 = t040 
	movl	-420(%rbp), %eax
	movl	%eax, -416(%rbp)
# 62:res = t041 arg1 = t040 
	movl	-420(%rbp), %eax
	movl	%eax, -424(%rbp)
# 63:
	movq	$.STR1,	%rdi
# 64:res = t042 
	pushq %rbp
	call	printStr
	movl	%eax, -428(%rbp)
	addq $8 , %rsp
# 65:res = t043 arg1 = err 
	leaq	-416(%rbp), %rax
	movq	%rax, -436(%rbp)
# 66:res = t043 
# 67:res = t044 
	pushq %rbp
	movq	-436(%rbp), %rdi
	call	readInt
	movl	%eax, -440(%rbp)
	addq $0 , %rsp
# 68:res = n arg1 = t044 
	movl	-440(%rbp), %eax
	movl	%eax, -412(%rbp)
# 69:res = t045 arg1 = t044 
	movl	-440(%rbp), %eax
	movl	%eax, -444(%rbp)
# 70:
	movq	$.STR2,	%rdi
# 71:res = t046 
	pushq %rbp
	call	printStr
	movl	%eax, -448(%rbp)
	addq $8 , %rsp
# 72:res = t047 
	movl	$0, -452(%rbp)
# 73:res = i arg1 = t047 
	movl	-452(%rbp), %eax
	movl	%eax, -448(%rbp)
# 74:res = t048 arg1 = t047 
	movl	-452(%rbp), %eax
	movl	%eax, -456(%rbp)
# 75:arg1 = i arg2 = n 
.L11:
	movl	-448(%rbp), %eax
	movl	-412(%rbp), %edx
	cmpl	%edx, %eax
	jl .L9
# 76:
	jmp .L10
# 77:
	jmp .L10
# 78:res = t049 
.L12:
	movl	$1, -460(%rbp)
# 79:res = t050 arg1 = i arg2 = t049 
	movl	-448(%rbp), %eax
	movl	-460(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -464(%rbp)
# 80:res = i arg1 = t050 
	movl	-464(%rbp), %eax
	movl	%eax, -448(%rbp)
# 81:res = t051 arg1 = t050 
	movl	-464(%rbp), %eax
	movl	%eax, -468(%rbp)
# 82:
	jmp .L11
# 83:res = t052 
.L9:
	movl	$0, -472(%rbp)
# 84:res = t054 arg1 = i 
	movl	-448(%rbp), %eax
	movl	$4, %ecx
	imull	%ecx, %eax
	movl	%eax, -480(%rbp)
# 85:res = t053 arg1 = t052 arg2 = t054 
	movl	-472(%rbp), %eax
	movl	-480(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -476(%rbp)
# 86:res = t055 arg1 = err 
	leaq	-416(%rbp), %rax
	movq	%rax, -488(%rbp)
# 87:res = t055 
# 88:res = t056 
	pushq %rbp
	movq	-488(%rbp), %rdi
	call	readInt
	movl	%eax, -492(%rbp)
	addq $0 , %rsp
# 89:res = arr arg1 = t053 arg2 = t056 
	leaq	-404(%rbp), %rdx
	movslq	-476(%rbp), %rax
	addq	%rax, %rdx
	movl	-492(%rbp), %eax
	movl	%eax, (%rdx)
# 90:res = t057 arg1 = t056 
	movl	-492(%rbp), %eax
	movl	%eax, -496(%rbp)
# 91:
	jmp .L12
# 92:res = t058 
.L10:
	movl	$0, -500(%rbp)
# 93:res = arr 
# 94:res = n 
# 95:res = t059 
	pushq %rbp
	movl	-412(%rbp) , %edi
	leaq	-404(%rbp), %rsi
	call	InsertionSort
	movl	%eax, -504(%rbp)
	addq $0 , %rsp
# 96:
	movq	$.STR3,	%rdi
# 97:res = t060 
	pushq %rbp
	call	printStr
	movl	%eax, -508(%rbp)
	addq $8 , %rsp
# 98:res = t061 
	movl	$0, -512(%rbp)
# 99:res = i arg1 = t061 
	movl	-512(%rbp), %eax
	movl	%eax, -448(%rbp)
# 100:res = t062 arg1 = t061 
	movl	-512(%rbp), %eax
	movl	%eax, -516(%rbp)
# 101:res = t063 
.L15:
	movl	$1, -520(%rbp)
# 102:res = t064 arg1 = n arg2 = t063 
	movl	-412(%rbp), %eax
	movl	-520(%rbp), %edx
	subl	%edx, %eax
	movl	%eax, -524(%rbp)
# 103:arg1 = i arg2 = t064 
	movl	-448(%rbp), %eax
	movl	-524(%rbp), %edx
	cmpl	%edx, %eax
	jl .L13
# 104:
	jmp .L14
# 105:
	jmp .L14
# 106:res = t065 
.L16:
	movl	$1, -528(%rbp)
# 107:res = t066 arg1 = i arg2 = t065 
	movl	-448(%rbp), %eax
	movl	-528(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -532(%rbp)
# 108:res = i arg1 = t066 
	movl	-532(%rbp), %eax
	movl	%eax, -448(%rbp)
# 109:res = t067 arg1 = t066 
	movl	-532(%rbp), %eax
	movl	%eax, -536(%rbp)
# 110:
	jmp .L15
# 111:res = t068 
.L13:
	movl	$0, -540(%rbp)
# 112:res = t070 arg1 = i 
	movl	-448(%rbp), %eax
	movl	$4, %ecx
	imull	%ecx, %eax
	movl	%eax, -548(%rbp)
# 113:res = t069 arg1 = t068 arg2 = t070 
	movl	-540(%rbp), %eax
	movl	-548(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -544(%rbp)
# 114:res = t071 arg1 = arr arg2 = t069 
	leaq	-404(%rbp), %rdx
	movslq	-544(%rbp), %rax
	addq	%rax, %rdx
	movl	(%rdx), %eax
	movl	%eax, -552(%rbp)
# 115:res = t071 
# 116:res = t072 
	pushq %rbp
	movl	-552(%rbp) , %edi
	call	printInt
	movl	%eax, -556(%rbp)
	addq $0 , %rsp
# 117:
	movq	$.STR4,	%rdi
# 118:res = t073 
	pushq %rbp
	call	printStr
	movl	%eax, -560(%rbp)
	addq $8 , %rsp
# 119:
	jmp .L16
# 120:res = t074 
.L14:
	movl	$0, -564(%rbp)
# 121:res = t075 
	movl	$1, -568(%rbp)
# 122:res = t076 arg1 = n arg2 = t075 
	movl	-412(%rbp), %eax
	movl	-568(%rbp), %edx
	subl	%edx, %eax
	movl	%eax, -572(%rbp)
# 123:res = t078 arg1 = t076 
	movl	-572(%rbp), %eax
	movl	$4, %ecx
	imull	%ecx, %eax
	movl	%eax, -580(%rbp)
# 124:res = t077 arg1 = t074 arg2 = t078 
	movl	-564(%rbp), %eax
	movl	-580(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -576(%rbp)
# 125:res = t079 arg1 = arr arg2 = t077 
	leaq	-404(%rbp), %rdx
	movslq	-576(%rbp), %rax
	addq	%rax, %rdx
	movl	(%rdx), %eax
	movl	%eax, -584(%rbp)
# 126:res = t079 
# 127:res = t080 
	pushq %rbp
	movl	-584(%rbp) , %edi
	call	printInt
	movl	%eax, -588(%rbp)
	addq $0 , %rsp
# 128:
	movq	$.STR5,	%rdi
# 129:res = t081 
	pushq %rbp
	call	printStr
	movl	%eax, -592(%rbp)
	addq $8 , %rsp
# 130:res = t082 
	movl	$0, -596(%rbp)
# 131:res = t082 
	movl	-596(%rbp), %eax
	jmp	.LRT1
.LRT1:
	addq	$-596, %rsp
	movq	%rbp, %rsp
	popq	%rbp
	ret
.LFE1:
	.size	main, .-main

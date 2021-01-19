	.file	"output.s"

.STR0:	.string "Longest Increasing Subsequence\nEnter size of array:\n"
.STR1:	.string "Enter array: (elements on new lines)\n"
.STR2:	.string "Length of LIS is: "
.STR3:	.string "\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$1184, %rsp
# 0:res = t000 
	movl	$100, -408(%rbp)
# 1:res = t001 
	movl	$1, -424(%rbp)
# 2:res = err arg1 = t001 
	movl	-424(%rbp), %eax
	movl	%eax, -420(%rbp)
# 3:res = t002 arg1 = t001 
	movl	-424(%rbp), %eax
	movl	%eax, -428(%rbp)
# 4:res = t003 
	movl	$100, -832(%rbp)
# 5:res = t004 
	movl	$0, -836(%rbp)
# 6:res = t005 
	movl	$0, -840(%rbp)
# 7:res = t007 arg1 = t005 
	movl	-840(%rbp), %eax
	movl	$4, %ecx
	imull	%ecx, %eax
	movl	%eax, -848(%rbp)
# 8:res = t006 arg1 = t004 arg2 = t007 
	movl	-836(%rbp), %eax
	movl	-848(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -844(%rbp)
# 9:res = t008 
	movl	$1, -852(%rbp)
# 10:res = l arg1 = t006 arg2 = t008 
	leaq	-828(%rbp), %rdx
	movslq	-844(%rbp), %rax
	addq	%rax, %rdx
	movl	-852(%rbp), %eax
	movl	%eax, (%rdx)
# 11:res = t009 arg1 = t008 
	movl	-852(%rbp), %eax
	movl	%eax, -856(%rbp)
# 12:
	movq	$.STR0,	%rdi
# 13:res = t010 
	pushq %rbp
	call	printStr
	movl	%eax, -860(%rbp)
	addq $8 , %rsp
# 14:res = t011 arg1 = err 
	leaq	-420(%rbp), %rax
	movq	%rax, -868(%rbp)
# 15:res = t011 
# 16:res = t012 
	pushq %rbp
	movq	-868(%rbp), %rdi
	call	readInt
	movl	%eax, -872(%rbp)
	addq $0 , %rsp
# 17:res = n arg1 = t012 
	movl	-872(%rbp), %eax
	movl	%eax, -4(%rbp)
# 18:res = t013 arg1 = t012 
	movl	-872(%rbp), %eax
	movl	%eax, -876(%rbp)
# 19:
	movq	$.STR1,	%rdi
# 20:res = t014 
	pushq %rbp
	call	printStr
	movl	%eax, -880(%rbp)
	addq $8 , %rsp
# 21:res = t015 
	movl	$0, -884(%rbp)
# 22:res = i arg1 = t015 
	movl	-884(%rbp), %eax
	movl	%eax, -412(%rbp)
# 23:res = t016 arg1 = t015 
	movl	-884(%rbp), %eax
	movl	%eax, -888(%rbp)
# 24:arg1 = i arg2 = n 
.L3:
	movl	-412(%rbp), %eax
	movl	-4(%rbp), %edx
	cmpl	%edx, %eax
	jl .L1
# 25:
	jmp .L2
# 26:
	jmp .L2
# 27:res = t017 
.L4:
	movl	$1, -892(%rbp)
# 28:res = t018 arg1 = i arg2 = t017 
	movl	-412(%rbp), %eax
	movl	-892(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -896(%rbp)
# 29:res = i arg1 = t018 
	movl	-896(%rbp), %eax
	movl	%eax, -412(%rbp)
# 30:res = t019 arg1 = t018 
	movl	-896(%rbp), %eax
	movl	%eax, -900(%rbp)
# 31:
	jmp .L3
# 32:res = t020 
.L1:
	movl	$0, -904(%rbp)
# 33:res = t022 arg1 = i 
	movl	-412(%rbp), %eax
	movl	$4, %ecx
	imull	%ecx, %eax
	movl	%eax, -912(%rbp)
# 34:res = t021 arg1 = t020 arg2 = t022 
	movl	-904(%rbp), %eax
	movl	-912(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -908(%rbp)
# 35:res = t023 arg1 = err 
	leaq	-420(%rbp), %rax
	movq	%rax, -920(%rbp)
# 36:res = t023 
# 37:res = t024 
	pushq %rbp
	movq	-920(%rbp), %rdi
	call	readInt
	movl	%eax, -924(%rbp)
	addq $0 , %rsp
# 38:res = a arg1 = t021 arg2 = t024 
	leaq	-404(%rbp), %rdx
	movslq	-908(%rbp), %rax
	addq	%rax, %rdx
	movl	-924(%rbp), %eax
	movl	%eax, (%rdx)
# 39:res = t025 arg1 = t024 
	movl	-924(%rbp), %eax
	movl	%eax, -928(%rbp)
# 40:
	jmp .L4
# 41:res = t026 
.L2:
	movl	$1, -932(%rbp)
# 42:res = i arg1 = t026 
	movl	-932(%rbp), %eax
	movl	%eax, -412(%rbp)
# 43:res = t027 arg1 = t026 
	movl	-932(%rbp), %eax
	movl	%eax, -936(%rbp)
# 44:arg1 = i arg2 = n 
.L7:
	movl	-412(%rbp), %eax
	movl	-4(%rbp), %edx
	cmpl	%edx, %eax
	jl .L5
# 45:
	jmp .L6
# 46:
	jmp .L6
# 47:res = t028 
.L16:
	movl	$1, -940(%rbp)
# 48:res = t029 arg1 = i arg2 = t028 
	movl	-412(%rbp), %eax
	movl	-940(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -944(%rbp)
# 49:res = i arg1 = t029 
	movl	-944(%rbp), %eax
	movl	%eax, -412(%rbp)
# 50:res = t030 arg1 = t029 
	movl	-944(%rbp), %eax
	movl	%eax, -948(%rbp)
# 51:
	jmp .L7
# 52:res = t031 
.L5:
	movl	$0, -952(%rbp)
# 53:res = t033 arg1 = i 
	movl	-412(%rbp), %eax
	movl	$4, %ecx
	imull	%ecx, %eax
	movl	%eax, -960(%rbp)
# 54:res = t032 arg1 = t031 arg2 = t033 
	movl	-952(%rbp), %eax
	movl	-960(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -956(%rbp)
# 55:res = t034 
	movl	$0, -964(%rbp)
# 56:res = l arg1 = t032 arg2 = t034 
	leaq	-828(%rbp), %rdx
	movslq	-956(%rbp), %rax
	addq	%rax, %rdx
	movl	-964(%rbp), %eax
	movl	%eax, (%rdx)
# 57:res = t035 arg1 = t034 
	movl	-964(%rbp), %eax
	movl	%eax, -968(%rbp)
# 58:res = t036 
	movl	$0, -972(%rbp)
# 59:res = j arg1 = t036 
	movl	-972(%rbp), %eax
	movl	%eax, -416(%rbp)
# 60:res = t037 arg1 = t036 
	movl	-972(%rbp), %eax
	movl	%eax, -976(%rbp)
# 61:arg1 = j arg2 = i 
.L10:
	movl	-416(%rbp), %eax
	movl	-412(%rbp), %edx
	cmpl	%edx, %eax
	jl .L8
# 62:
	jmp .L9
# 63:
	jmp .L9
# 64:res = t038 
.L12:
	movl	$1, -980(%rbp)
# 65:res = t039 arg1 = j arg2 = t038 
	movl	-416(%rbp), %eax
	movl	-980(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -984(%rbp)
# 66:res = j arg1 = t039 
	movl	-984(%rbp), %eax
	movl	%eax, -416(%rbp)
# 67:res = t040 arg1 = t039 
	movl	-984(%rbp), %eax
	movl	%eax, -988(%rbp)
# 68:
	jmp .L10
# 69:res = t041 
.L8:
	movl	$0, -992(%rbp)
# 70:res = t043 arg1 = j 
	movl	-416(%rbp), %eax
	movl	$4, %ecx
	imull	%ecx, %eax
	movl	%eax, -1000(%rbp)
# 71:res = t042 arg1 = t041 arg2 = t043 
	movl	-992(%rbp), %eax
	movl	-1000(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -996(%rbp)
# 72:res = t044 arg1 = a arg2 = t042 
	leaq	-404(%rbp), %rdx
	movslq	-996(%rbp), %rax
	addq	%rax, %rdx
	movl	(%rdx), %eax
	movl	%eax, -1004(%rbp)
# 73:res = t045 
	movl	$0, -1008(%rbp)
# 74:res = t047 arg1 = i 
	movl	-412(%rbp), %eax
	movl	$4, %ecx
	imull	%ecx, %eax
	movl	%eax, -1016(%rbp)
# 75:res = t046 arg1 = t045 arg2 = t047 
	movl	-1008(%rbp), %eax
	movl	-1016(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -1012(%rbp)
# 76:res = t048 arg1 = a arg2 = t046 
	leaq	-404(%rbp), %rdx
	movslq	-1012(%rbp), %rax
	addq	%rax, %rdx
	movl	(%rdx), %eax
	movl	%eax, -1020(%rbp)
# 77:arg1 = t044 arg2 = t048 
	movl	-1004(%rbp), %eax
	movl	-1020(%rbp), %edx
	cmpl	%edx, %eax
	jl .L11
# 78:
	jmp .L12
# 79:
	jmp .L13
# 80:res = t049 
.L11:
	movl	$0, -1024(%rbp)
# 81:res = t051 arg1 = j 
	movl	-416(%rbp), %eax
	movl	$4, %ecx
	imull	%ecx, %eax
	movl	%eax, -1032(%rbp)
# 82:res = t050 arg1 = t049 arg2 = t051 
	movl	-1024(%rbp), %eax
	movl	-1032(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -1028(%rbp)
# 83:res = t052 arg1 = l arg2 = t050 
	leaq	-828(%rbp), %rdx
	movslq	-1028(%rbp), %rax
	addq	%rax, %rdx
	movl	(%rdx), %eax
	movl	%eax, -1036(%rbp)
# 84:res = t053 
	movl	$0, -1040(%rbp)
# 85:res = t055 arg1 = i 
	movl	-412(%rbp), %eax
	movl	$4, %ecx
	imull	%ecx, %eax
	movl	%eax, -1048(%rbp)
# 86:res = t054 arg1 = t053 arg2 = t055 
	movl	-1040(%rbp), %eax
	movl	-1048(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -1044(%rbp)
# 87:res = t056 arg1 = l arg2 = t054 
	leaq	-828(%rbp), %rdx
	movslq	-1044(%rbp), %rax
	addq	%rax, %rdx
	movl	(%rdx), %eax
	movl	%eax, -1052(%rbp)
# 88:arg1 = t052 arg2 = t056 
	movl	-1036(%rbp), %eax
	movl	-1052(%rbp), %edx
	cmpl	%edx, %eax
	jg .L14
# 89:
	jmp .L12
# 90:
	jmp .L15
# 91:res = t057 
.L14:
	movl	$0, -1056(%rbp)
# 92:res = t059 arg1 = i 
	movl	-412(%rbp), %eax
	movl	$4, %ecx
	imull	%ecx, %eax
	movl	%eax, -1064(%rbp)
# 93:res = t058 arg1 = t057 arg2 = t059 
	movl	-1056(%rbp), %eax
	movl	-1064(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -1060(%rbp)
# 94:res = t060 
	movl	$0, -1068(%rbp)
# 95:res = t062 arg1 = j 
	movl	-416(%rbp), %eax
	movl	$4, %ecx
	imull	%ecx, %eax
	movl	%eax, -1076(%rbp)
# 96:res = t061 arg1 = t060 arg2 = t062 
	movl	-1068(%rbp), %eax
	movl	-1076(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -1072(%rbp)
# 97:res = t063 arg1 = l arg2 = t061 
	leaq	-828(%rbp), %rdx
	movslq	-1072(%rbp), %rax
	addq	%rax, %rdx
	movl	(%rdx), %eax
	movl	%eax, -1080(%rbp)
# 98:res = l arg1 = t058 arg2 = t063 
	leaq	-828(%rbp), %rdx
	movslq	-1060(%rbp), %rax
	addq	%rax, %rdx
	movl	-1080(%rbp), %eax
	movl	%eax, (%rdx)
# 99:res = t064 arg1 = t063 
	movl	-1080(%rbp), %eax
	movl	%eax, -1084(%rbp)
# 100:
	jmp .L12
# 101:
.L15:
	jmp .L12
# 102:
.L13:
	jmp .L12
# 103:res = t065 
.L9:
	movl	$0, -1088(%rbp)
# 104:res = t067 arg1 = i 
	movl	-412(%rbp), %eax
	movl	$4, %ecx
	imull	%ecx, %eax
	movl	%eax, -1096(%rbp)
# 105:res = t066 arg1 = t065 arg2 = t067 
	movl	-1088(%rbp), %eax
	movl	-1096(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -1092(%rbp)
# 106:res = t068 arg1 = l arg2 = t066 
	leaq	-828(%rbp), %rdx
	movslq	-1092(%rbp), %rax
	addq	%rax, %rdx
	movl	(%rdx), %eax
	movl	%eax, -1100(%rbp)
# 107:res = t069 arg1 = l arg2 = t066 
	leaq	-828(%rbp), %rdx
	movslq	-1092(%rbp), %rax
	addq	%rax, %rdx
	movl	(%rdx), %eax
	movl	%eax, -1104(%rbp)
# 108:res = t069 arg1 = t069 
	movl	-1104(%rbp), %eax
	movl	$1, %edx
	addl	%edx, %eax
	movl	%eax, -1104(%rbp)
# 109:res = l arg1 = t066 arg2 = t069 
	leaq	-828(%rbp), %rdx
	movslq	-1092(%rbp), %rax
	addq	%rax, %rdx
	movl	-1104(%rbp), %eax
	movl	%eax, (%rdx)
# 110:
	jmp .L16
# 111:res = t070 
.L6:
	movl	$0, -1112(%rbp)
# 112:res = ans arg1 = t070 
	movl	-1112(%rbp), %eax
	movl	%eax, -1108(%rbp)
# 113:res = t071 arg1 = t070 
	movl	-1112(%rbp), %eax
	movl	%eax, -1116(%rbp)
# 114:res = t072 
	movl	$0, -1120(%rbp)
# 115:res = i arg1 = t072 
	movl	-1120(%rbp), %eax
	movl	%eax, -412(%rbp)
# 116:res = t073 arg1 = t072 
	movl	-1120(%rbp), %eax
	movl	%eax, -1124(%rbp)
# 117:arg1 = i arg2 = n 
.L19:
	movl	-412(%rbp), %eax
	movl	-4(%rbp), %edx
	cmpl	%edx, %eax
	jl .L17
# 118:
	jmp .L18
# 119:
	jmp .L18
# 120:res = t074 
.L21:
	movl	$1, -1128(%rbp)
# 121:res = t075 arg1 = i arg2 = t074 
	movl	-412(%rbp), %eax
	movl	-1128(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -1132(%rbp)
# 122:res = i arg1 = t075 
	movl	-1132(%rbp), %eax
	movl	%eax, -412(%rbp)
# 123:res = t076 arg1 = t075 
	movl	-1132(%rbp), %eax
	movl	%eax, -1136(%rbp)
# 124:
	jmp .L19
# 125:res = t077 
.L17:
	movl	$0, -1140(%rbp)
# 126:res = t079 arg1 = i 
	movl	-412(%rbp), %eax
	movl	$4, %ecx
	imull	%ecx, %eax
	movl	%eax, -1148(%rbp)
# 127:res = t078 arg1 = t077 arg2 = t079 
	movl	-1140(%rbp), %eax
	movl	-1148(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -1144(%rbp)
# 128:res = t080 arg1 = l arg2 = t078 
	leaq	-828(%rbp), %rdx
	movslq	-1144(%rbp), %rax
	addq	%rax, %rdx
	movl	(%rdx), %eax
	movl	%eax, -1152(%rbp)
# 129:arg1 = ans arg2 = t080 
	movl	-1108(%rbp), %eax
	movl	-1152(%rbp), %edx
	cmpl	%edx, %eax
	jle .L20
# 130:
	jmp .L21
# 131:
	jmp .L22
# 132:res = t081 
.L20:
	movl	$0, -1156(%rbp)
# 133:res = t083 arg1 = i 
	movl	-412(%rbp), %eax
	movl	$4, %ecx
	imull	%ecx, %eax
	movl	%eax, -1164(%rbp)
# 134:res = t082 arg1 = t081 arg2 = t083 
	movl	-1156(%rbp), %eax
	movl	-1164(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -1160(%rbp)
# 135:res = t084 arg1 = l arg2 = t082 
	leaq	-828(%rbp), %rdx
	movslq	-1160(%rbp), %rax
	addq	%rax, %rdx
	movl	(%rdx), %eax
	movl	%eax, -1168(%rbp)
# 136:res = ans arg1 = t084 
	movl	-1168(%rbp), %eax
	movl	%eax, -1108(%rbp)
# 137:res = t085 arg1 = t084 
	movl	-1168(%rbp), %eax
	movl	%eax, -1172(%rbp)
# 138:
	jmp .L21
# 139:
.L22:
	jmp .L21
# 140:
.L18:
	movq	$.STR2,	%rdi
# 141:res = t086 
	pushq %rbp
	call	printStr
	movl	%eax, -1176(%rbp)
	addq $8 , %rsp
# 142:res = ans 
# 143:res = t087 
	pushq %rbp
	movl	-1108(%rbp) , %edi
	call	printInt
	movl	%eax, -1180(%rbp)
	addq $0 , %rsp
# 144:
	movq	$.STR3,	%rdi
# 145:res = t088 
	pushq %rbp
	call	printStr
	movl	%eax, -1184(%rbp)
	addq $8 , %rsp
.LRT0:
	addq	$-1184, %rsp
	movq	%rbp, %rsp
	popq	%rbp
	ret
.LFE0:
	.size	main, .-main

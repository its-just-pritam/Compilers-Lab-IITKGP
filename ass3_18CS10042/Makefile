a.out:	lex.yy.c
		gcc lex.yy.c -lfl

lex.yy.c:	ass3_18CS10042.l ass3_18CS10042_main.c
		flex ass3_18CS10042.l ass3_18CS10042_main.c

clean:
		rm a.out lex.yy.c

test:
		./a.out <ass3_18CS10042_test.c
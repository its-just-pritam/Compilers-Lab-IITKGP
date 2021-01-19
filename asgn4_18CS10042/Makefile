test: a.out asgn4_18CS10042_test.c 
	./a.out < asgn4_18CS10042_test.c

a.out: lex.yy.c y.tab.c asgn4_18CS10042_main.c
	gcc lex.yy.c y.tab.c asgn4_18CS10042_main.c -lfl

lex.yy.c: asgn4_18CS10042.l
	flex asgn4_18CS10042.l

y.tab.c: asgn4_18CS10042.y
	yacc -dtv asgn4_18CS10042.y

clean:
	rm lex.yy.c y.tab.c y.tab.h y.output a.out
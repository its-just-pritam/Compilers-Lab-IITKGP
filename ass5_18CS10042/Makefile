test: a.out
	./a.out < Test\ Inputs/ass5_18CS10042_test1.c > Test\ Outputs/ass5_18CS10042_quads1.out
	./a.out < Test\ Inputs/ass5_18CS10042_test2.c > Test\ Outputs/ass5_18CS10042_quads2.out
	./a.out < Test\ Inputs/ass5_18CS10042_test3.c > Test\ Outputs/ass5_18CS10042_quads3.out
	./a.out < Test\ Inputs/ass5_18CS10042_test4.c > Test\ Outputs/ass5_18CS10042_quads4.out
	./a.out < Test\ Inputs/ass5_18CS10042_test5.c > Test\ Outputs/ass5_18CS10042_quads5.out


a.out: lex.yy.o y.tab.o ass5_18CS10042_translator.o
	g++ lex.yy.o y.tab.o ass5_18CS10042_translator.o -lfl

ass5_18CS10042_translator.o: ass5_18CS10042_translator.cxx ass5_18CS10042_translator.h
	g++ -c ass5_18CS10042_translator.h
	g++ -c ass5_18CS10042_translator.cxx

lex.yy.o: lex.yy.c
	g++ -c lex.yy.c

y.tab.o: y.tab.c
	g++ -c y.tab.c

lex.yy.c: ass5_18CS10042.l y.tab.h ass5_18CS10042_translator.h
	flex ass5_18CS10042.l

y.tab.c: ass5_18CS10042.y
	yacc -dtv ass5_18CS10042.y -Wno

y.tab.h: ass5_18CS10042.y
	yacc -dtv ass5_18CS10042.y -Wno
	
clean:
	rm -f lex.yy.c y.tab.c y.tab.h lex.yy.o y.tab.o ass5_18CS10042_translator.o y.output a.out ass5_18CS10042_translator.h.gch ass5_18CS10042_quads1.out ass5_18CS10042_quads2.out ass5_18CS10042_quads3.out ass5_18CS10042_quads4.out ass5_18CS10042_quads5.out ass5_18CS10042.tab.c ass5_18CS10042.tab.h ass5_18CS10042.output  
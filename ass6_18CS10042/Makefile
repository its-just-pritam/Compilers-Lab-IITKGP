tinyc: y.tab.o lex.yy.o ass6_18CS10042_translator.o ass6_18CS10042_target_translator.o
	g++ -g ass6_18CS10042_translator.o ass6_18CS10042_target_translator.o lex.yy.o y.tab.o -lfl -o tinyc
# 	 ./tinyc < ass6_18CS10042_test1.c
# 	 ./tinyc < ass6_18CS10042_test2.c
# 	 ./tinyc < ass6_18CS10042_test3.c
# 	 ./tinyc < ass6_18CS10042_test4.c
# 	 ./tinyc < ass6_18CS10042_test5.c
	# Use the command `make run` to compile all the test files at once
lex.yy.c: ass6_18CS10042.l
	flex ass6_18CS10042.l
y.tab.c: ass6_18CS10042.y
	yacc -dtv ass6_18CS10042.y -Wno
ass6_18CS10042_target_translator.o: ass6_18CS10042_target_translator.cxx
	g++ -g -c ass6_18CS10042_target_translator.cxx
ass6_18CS10042_translator.o: ass6_18CS10042_translator.cxx
	g++ -g -c ass6_18CS10042_translator.cxx
lex.yy.o: lex.yy.c
	g++ -g -c lex.yy.c
y.tab.o:    y.tab.c
	g++ -g -DYYDEBUG -c y.tab.c 
libass2_18CS10042.a: ass2_18CS10042.o
	ar -rcs libass2_18CS10042.a ass2_18CS10042.o

ass2_18CS10042.o: ass2_18CS10042.c toylib.h
	gcc -Wall  -c ass2_18CS10042.c
clean:
	rm tinyc test1 test2 test3 test4 test5 lex.yy.c y.tab.h y.output y.tab.c lex.yy.o y.tab.o ass6_18CS10042_translator.o ass6_18CS10042_target_translator.o ass6_18CS10042_test1.o ass6_18CS10042_test2.o ass6_18CS10042_test3.o ass6_18CS10042_test4.o ass6_18CS10042_test5.o libass2_18CS10042.a ass2_18CS10042.o ass6_18CS10042_quads1.out ass6_18CS10042_quads2.out ass6_18CS10042_quads3.out ass6_18CS10042_quads4.out ass6_18CS10042_quads5.out ass6_18CS10042_test1.s ass6_18CS10042_test2.s ass6_18CS10042_test3.s ass6_18CS10042_test4.s ass6_18CS10042_test5.s

test1: ass6_18CS10042_test1.o libass2_18CS10042.a
	gcc -no-pie -g ass6_18CS10042_test1.o -o test1 -L. -lass2_18CS10042 
ass6_18CS10042_test1.o: ass6_18CS10042_test1.s toylib.h
	gcc -g -Wall  -c ass6_18CS10042_test1.s -o ass6_18CS10042_test1.o 

test2: ass6_18CS10042_test2.o libass2_18CS10042.a
	gcc -no-pie -g  ass6_18CS10042_test2.o -o test2 -L. -lass2_18CS10042
ass6_18CS10042_test2.o: ass6_18CS10042_test2.s toylib.h
	gcc -g -Wall -c ass6_18CS10042_test2.s

test3: ass6_18CS10042_test3.o libass2_18CS10042.a
	gcc -no-pie -g  ass6_18CS10042_test3.o -o test3 -L. -lass2_18CS10042
ass6_18CS10042_test3.o: ass6_18CS10042_test3.s toylib.h
	gcc -g -Wall  -c ass6_18CS10042_test3.s

test4: ass6_18CS10042_test4.o libass2_18CS10042.a
	gcc -no-pie -g  ass6_18CS10042_test4.o -o test4 -L. -lass2_18CS10042
ass6_18CS10042_test4.o: ass6_18CS10042_test4.s toylib.h
	gcc -g -Wall  -c ass6_18CS10042_test4.s

test5: ass6_18CS10042_test5.o libass2_18CS10042.a
	gcc -no-pie -g  ass6_18CS10042_test5.o -o test5 -L. -lass2_18CS10042
ass6_18CS10042_test5.o: ass6_18CS10042_test5.s toylib.h
	gcc -g -Wall -c ass6_18CS10042_test5.s

output: output.o libass2_18CS10042.a
	gcc -no-pie -g  output.o -o output -L. -lass2_18CS10042
output.o: output.s toylib.h
	gcc -g -Wall -c output.s

run:

	./tinyc < ass6_18CS10042_test1.c > ass6_18CS10042_quads1.out

	mv output.s ass6_18CS10042_test1.s
	cp ass6_18CS10042_test1.s ass6_18CS10042_test1.asm

	make test1

	./tinyc < ass6_18CS10042_test2.c > ass6_18CS10042_quads2.out

	mv output.s ass6_18CS10042_test2.s
	cp ass6_18CS10042_test2.s ass6_18CS10042_test2.asm

	make test2

	./tinyc < ass6_18CS10042_test3.c > ass6_18CS10042_quads3.out

	mv output.s ass6_18CS10042_test3.s
	cp ass6_18CS10042_test3.s ass6_18CS10042_test3.asm

	make test3

	./tinyc < ass6_18CS10042_test4.c > ass6_18CS10042_quads4.out

	mv output.s ass6_18CS10042_test4.s
	cp ass6_18CS10042_test4.s ass6_18CS10042_test4.asm

	make test4

	./tinyc < ass6_18CS10042_test5.c > ass6_18CS10042_quads5.out

	mv output.s ass6_18CS10042_test5.s
	cp ass6_18CS10042_test5.s ass6_18CS10042_test5.asm

	make test5

	# Use the following commands for executing each test file
	#./test1
	#./test2
	#./test3
	#./test4
	#./test5

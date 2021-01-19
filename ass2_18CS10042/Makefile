a.out : main.o libtoylib.a

			c++ main.o -L. -ltoylib

main.o: main.cpp toylib.h


			c++ -Wall -c main.cpp


libtoylib.a: ass2_18CS10042.o

				ar -rcs libtoylib.a ass2_18CS10042.o

ass2_18CS10058.o: ass2_18CS10042.cpp toylib.h

					 c++ -Wall -c ass2_18CS10042.cpp


clean: 

			rm -rf a.out main.o libtoylib.a ass2_18CS10042.o
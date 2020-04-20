a.out: main.o definitions.o
	g++ main.o definitions.o
main.o : main.cpp
	g++ -c main.cpp
definitions.o : definitions.cpp
	g++ -c definitions.cpp
clean :
	rm *.o a.out

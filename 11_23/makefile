test.exe: test.o max.o
	g++ -o test.exe test.o max.o
 
test.o: test.cpp max.h
	g++ -c test.cpp
 
max.o: max.cpp max.h
	g++ -c max.cpp
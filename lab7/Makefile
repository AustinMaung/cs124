lab2: ama7.o paren.o
	g++ ama7.o paren.o -o lab7

ama7.o: ama7.cpp paren.h
	g++ -c ama7.cpp

paren.o: paren.cpp paren.h
	g++ -c paren.cpp

clean: #del is rm for windows
	del *.o 
	del lab7.exe
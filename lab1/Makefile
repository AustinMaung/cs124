lab1: maunga1.o auxa1.o maze.o
	g++ maunga1.o auxa1.o maze.o -o lab1

maunga1.o: maunga1.cpp auxa1.h maze.h
	g++ -c maunga1.cpp

auxa1.o: auxa1.cpp auxa1.h
	g++ -c auxa1.cpp

maze.o: auxa1.cpp auxa1.h maze.cpp maze.h
	g++ -c maze.cpp

clean: #del is rm for windows
	del *.o 
	del lab1.exe
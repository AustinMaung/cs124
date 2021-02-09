test: main.o selection.o
	g++ main.o selection.o -o test

main.o: main.cpp selection.h
	g++ -c main.cpp

selection.o: selection.cpp selection.h
	g++ -c selection.cpp

clean: #del is rm for windows
	del *.o 
	del test.exe
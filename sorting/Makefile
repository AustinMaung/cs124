test: main.o selection.o merge.o
	g++ main.o selection.o merge.o -o test

main.o: main.cpp selection.h merge.o
	g++ -c main.cpp

selection.o: selection.cpp selection.h
	g++ -c selection.cpp

merge.o: merge.cpp merge.h
	g++ -c merge.cpp

clean: #del is rm for windows
	del *.o 
	del test.exe
lab2: ama8.o hashtable.o
	g++ ama8.o hashtable.o -o lab8

ama8.o: ama8.cpp hashtable.h
	g++ -c ama8.cpp

hashtable.o: hashtable.cpp hashtable.h
	g++ -c hashtable.cpp

clean: #del is rm for windows -rm -f lab8.exe *.o
	del *.o 
	del lab8.exe
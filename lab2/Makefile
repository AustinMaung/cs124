lab2: maunga2.o rain.o
	g++ maunga2.o rain.o -o lab2

maunga2.o: maunga2.cpp rain.h
	g++ -c maunga2.cpp

rain.o: rain.cpp rain.h
	g++ -c rain.cpp

clean: #del is rm for windows
	del *.o 
	del lab2.exe
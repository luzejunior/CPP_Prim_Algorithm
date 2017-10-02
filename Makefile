CC = g++

program: Graph/*.cpp Graph/*.h main.cpp
	$(CC) Graph/*.cpp main.cpp -o program

run:
	./program

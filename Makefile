CC = g++

program: Graph/*.cpp Graph/*.h Makefile main.cpp
	$(CC) -std=c++11 Graph/*.cpp main.cpp -o program

run:
	./program

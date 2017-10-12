CC = g++
FLAGS = -std=c++11

.PHONY: prim dijkstra

program: Graph/*.cpp Graph/*.h Makefile main.cpp
	$(CC) $(FLAGS) Graph/*.cpp main.cpp -o program

prim:
	./program prim

dijkstra:
	./program dijkstra

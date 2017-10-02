CC = g++

program: *.cpp *.h
	$(CC) *.cpp -o program

run:
	./program

.PHONY: clean all
BINARY_NAME = sweet
CC = g++

all: main.o math.o
	$(CC) main.o math.o -o $(BINARY_NAME)

main.o: main.cpp
	$(CC) -c main.cpp -o main.o -I ../include

math.o: math.cpp
	$(CC) -c math.cpp -o math.o -I ../include

clean:
	rm -rf $(BINARY_NAME) main.o math.o

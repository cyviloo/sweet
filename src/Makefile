.PHONY: clean all
BINARY_NAME = sweet
CC = g++

all: main.o math.o geometry.o
	$(CC) main.o math.o geometry.o -o $(BINARY_NAME)

%.o: %.cpp
	$(CC) -c $< -o $@ -I ../include

clean:
	rm -rf $(BINARY_NAME) *.o

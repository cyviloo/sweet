.PHONY: clean all
BINARY_NAME = sweet
CC = g++

all: main.o math.o
	$(CC) main.o math.o -o $(BINARY_NAME)

%.o: %.cpp
	$(CC) -c $< -o $@ -I ../include

#math.o: math.cpp
#	$(CC) -c math.cpp -o math.o -I ../include

clean:
	rm -rf $(BINARY_NAME) main.o math.o

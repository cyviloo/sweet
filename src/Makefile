.PHONY: clean all

BINARY_NAME = sweet
CC = g++

DEP_DIR = ../include
DEP = math.h geometry.h

OBJ_DIR = obj
OBJ = main.o math.o geometry.o

DEPS = $(patsubst %,$(DEP_DIR)/%,$(DEP))
OBJS = $(patsubst %,$(OBJ_DIR)/%,$(OBJ))

CFLAGS = -I$(DEP_DIR)


all: $(OBJS)
	$(CC) $(OBJS) -o $(BINARY_NAME)

$(OBJ_DIR)/%.o: %.cpp $(DEPS) 
	$(CC) -c $< -o $@ $(CFLAGS)

clean:
	rm -rf $(BINARY_NAME) $(OBJS)
	

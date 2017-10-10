.PHONY: clean all echo_build echo_clean

BINARY_NAME = ../sweet
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

$(OBJ_DIR)/%.o: %.cpp $(DEPS) echo_build
	$(CC) -c $< -o $@ $(CFLAGS)

echo_build:
	@echo "\n           Building program $(BINARY_NAME) :"

clean: echo_clean
	rm -rf $(BINARY_NAME) $(OBJS)

echo_clean:
	@echo "\n           Cleaning program binaries :"
	

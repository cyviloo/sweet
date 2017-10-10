.PHONY: clean all echo_build echo_clean

BINARY_NAME = ../sweet
CC = g++

INC_DIR = ../include
INC = math.h geometry.h

LIBPREF_DIR = ../lib
LIB_DIR = $(LIBPREF_DIR)/bin
DEP_DIR = $(LIBPREF_DIR)/include
LIB = libfactorial.a

OBJ_DIR = obj
OBJ = main.o math.o geometry.o

INCS = $(patsubst %,$(INC_DIR)/%,$(INC))
OBJS = $(patsubst %,$(OBJ_DIR)/%,$(OBJ))
LIBS = $(patsubst %,$(LIB_DIR)/%,$(LIB))

CFLAGS = -I$(INC_DIR) -I$(DEP_DIR)


all: echo_build $(OBJS) $(LIBS)
	$(CC) $(OBJS) $(LIBS) -L/home/hcooh/workspace/sweet/lib/bin/ -lpower -o $(BINARY_NAME)

$(OBJ_DIR)/%.o: %.cpp $(INCS) 
	$(CC) -c $< -o $@ $(CFLAGS)

echo_build:
	@echo "\n           Building program $(BINARY_NAME) :"

clean: echo_clean
	rm -rf $(BINARY_NAME) $(OBJS)

echo_clean:
	@echo "\n           Cleaning program binaries :"
	

.PHONY: clean all factorial echo_clean echo_build_factorial

BIN_DIR = bin
INC_DIR = include
SRC_DIR = src
CC = g++
CFLAGS_STATIC = -Wall -Iinclude -c
AR = ar
ARFLAGS = -cvq

all: echo_build_factorial $(BIN_DIR)/libfactorial.a 
	

# static library

$(BIN_DIR)/libfactorial.a: $(BIN_DIR)/factorial.o 
	$(AR) $(ARFLAGS) $@ $<

$(BIN_DIR)/factorial.o: $(SRC_DIR)/factorial.cpp 
	$(CC) $(CFLAGS_STATIC) $< -o $@


# shared library

# TBD


clean: echo_clean
	rm -rf $(BIN_DIR)/*


echo_build_factorial:
	@echo "\n           Building libfactorial.a :"

echo_clean:
	@echo "\n           Cleaning libs :"

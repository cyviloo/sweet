.PHONY: clean all factorial echo_clean echo_build_factorial

BIN_DIR = bin
INC_DIR = include
SRC_DIR = src
CC = g++
CFLAGS = -Wall -Iinclude -c
AR = ar
ARFLAGS = -cvq

all: echo_build_factorial $(BIN_DIR)/factorial.a
	

$(BIN_DIR)/factorial.a: $(BIN_DIR)/factorial.o 
	$(AR) $(ARFLAGS) $@ $<

$(BIN_DIR)/factorial.o: $(SRC_DIR)/factorial.cpp 
	$(CC) $(CFLAGS) $< -o $@

clean: echo_clean
	rm -rf $(BIN_DIR)/*


echo_build_factorial:
	@echo "\n           Building factorial.a lib :"

echo_clean:
	@echo "\n           Cleaning libs :"

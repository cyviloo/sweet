.PHONY: clean echo_build echo_clean
CC = g++

PROG_DIR = ../src
LIB_DIR = ../lib/src
EXT_SRCS = $(PROG_DIR)/geometry.cpp
INC_DIR = ../include
SRCS = test_main.cpp test_geometry.cpp

BINARY_NAME = sweet_unit_tests

all: echo_build $(BINARY_NAME)

echo_build:
	@echo "\n           Building program $(BINARY_NAME) :"

$(BINARY_NAME): $(SRCS) $(EXT_SRCS)
	$(CC) -I$(INC_DIR) $(EXT_SRCS) $(SRCS) -o $(BINARY_NAME)


clean: echo_clean
	rm -rf $(BINARY_NAME)

echo_clean:
	@echo "\n           Cleaning unit tests :"


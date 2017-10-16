.PHONY: clean echo_build echo_clean
CC = g++
SRCS = test_main.cpp
BINARY_NAME = sweet_unit_tests

all: echo_build $(BINARY_NAME)

echo_build:
	@echo "\n           Building program $(BINARY_NAME) :"

$(BINARY_NAME): $(SRCS)
	$(CC) $(SRCS) -o $(BINARY_NAME)


clean: echo_clean
	rm -rf $(BINARY_NAME)

echo_clean:
	@echo "\n           Cleaning unit tests :"


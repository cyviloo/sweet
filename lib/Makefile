# NOTE: Here, as an example, we are creating one static library
# and one dynamic library. If you happen to make some stand-alone
# library one day you can choose different approach, i.e. create
# two targets for building it - one for making it static, the other
# for making it shared.

.PHONY: clean all factorial echo_clean echo_build_factorial echo_build_list echo_build_power

BIN_DIR = bin
INC_DIR = include
SRC_DIR = src
CC = g++
CFLAGS = -Wall -Iinclude -c
AR = ar
ARFLAGS = -cvq
CFLAGS_CSHARED = -fPIC
CFLAGS_LSHARED = -shared -Wl,-soname,libpower.so.1


all: echo_build_libs factorial power


# static library

factorial: echo_build_factorial $(BIN_DIR)/libfactorial.a 

$(BIN_DIR)/libfactorial.a: $(BIN_DIR)/factorial.o 
	$(AR) $(ARFLAGS) $@ $^

$(BIN_DIR)/factorial.o: $(SRC_DIR)/factorial.cpp 
	$(CC) $(CFLAGS) $< -o $@


# shared library

power: echo_build_power $(BIN_DIR)/libpower.so.1.0

$(BIN_DIR)/libpower.so.1.0: $(BIN_DIR)/power.o
	$(CC) $(CFLAGS_LSHARED) -o $@ $^
	ln -sf libpower.so.1.0 $(BIN_DIR)/libpower.so.1
	ln -sf libpower.so.1.0 $(BIN_DIR)/libpower.so

$(BIN_DIR)/power.o:
	$(CC) $(CFLAGS) $(CFLAGS_CSHARED) $(SRC_DIR)/power.cpp -o $@


clean: echo_clean
	rm -rf $(BIN_DIR)/*


echo_build_factorial:
	@echo "\n           Building libfactorial.a :"

echo_build_power:
	@echo "\n           Building libpower.so :"
	@echo "           Remember to add lib's path to LD_LIBRARY_PATH!"

echo_clean:
	@echo "\n           Cleaning libs :"

echo_build_libs:
	@echo "\n           Building libs :"

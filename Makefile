.PHONY: all clean lib test

all: lib prog test
	

prog:
	make -C src/

lib:
	make -C lib/

test:
	make -C test/

clean:
	make clean -C src/
	make clean -C lib/
	make clean -C test/

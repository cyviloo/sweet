.PHONY: all clean lib

all: lib prog
	

prog:
	make -C src/

lib:
	make -C lib/

clean:
	make clean -C src/
	make clean -C lib/

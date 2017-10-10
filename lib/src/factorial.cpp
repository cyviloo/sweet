#include "factorial.h"

uint64_t factorial(unsigned int n) {
	if(n < 2)
		return 1;
	else
		return n * factorial(n - 1);
}

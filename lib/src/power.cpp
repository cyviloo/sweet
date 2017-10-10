#include "power.h"

long long unsigned int power(
		long long unsigned int number, unsigned int powerOf) {
	while(powerOf > 1) {
		number *= number;
		--powerOf;
	}
	return number;
}

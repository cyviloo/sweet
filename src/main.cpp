#include <iostream>
#include "geometry.h"
#include "heavy_math.h"

/* We include the header of libfactorial.a ! */
#include "factorial.h"

/* We include the header of libpower.so ! */
#include "power.h"

using namespace std;

int main(int argc, char **argv) {
	cout << "Heavy maths...\n5 + 50 = " 
	<< add(5, 50) << "\nThe area of a circle of a radius 10 = "
	<< circleArea(10) << endl << endl;

	cout << "And now we are running the library function from"
	" libfactorial.a:\n10! = " << factorial(10) << endl << endl;

	cout << "Let's run the library function from libpower.so : "
	<< "\n7^4 = " << power(7, 4) << endl;
	return 0;
}


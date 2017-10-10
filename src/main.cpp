#include <iostream>
#include "geometry.h"
#include "math.h"

/* We include the header of factorial.a ! */
#include "factorial.h"

using namespace std;

int main(int argc, char **argv) {
	cout << "Heavy maths...\n5 + 50 = " 
	<< add(5, 50) << "\nThe area of a circle of a radius 10 = "
	<< circleArea(10) << endl << endl;

	cout << "And now we are running the library function from"
	" factorial.a:\n10! = " << factorial(10) << endl;
	return 0;
}


#include <iostream>
#include "geometry.h"
#include "math.h"

/* Dodajemy naglowek biblioteki factorial.a ! */
#include "factorial.h"

using namespace std;

int main(int argc, char **argv) {
	cout << "Ciezka matematyka...\n5 + 50 = " 
	<< add(5, 50) << "\nPole kola o promieniu 10 = "
	<< circleArea(10) << endl << endl;

	cout << "Uwaga, a oto wykonanie funkcji z biblioteki"
	" factorial.a:\nsilnia z 10 = " << factorial(10) << endl;
	return 0;
}


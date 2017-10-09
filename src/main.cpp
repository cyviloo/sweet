#include <iostream>
#include "../include/geometry.h"
#include "../include/math.h"
using namespace std;

int main(int argc, char **argv) {
	cout << "Ciezka matematyka...\n5 + 50 = " 
	<< add(5, 50) << "\nPole kola o promieniu 10 = "
	<< circleArea(10) << endl;
	return 0;
}


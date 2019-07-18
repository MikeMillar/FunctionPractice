#include <iostream>
#include "utils.h"

using namespace std;

// Prototype or Declaration above main, allows you to write functions after main.


int main() {
	showMenu();
	int input = getInput();
	update(input);
	return 0;
}


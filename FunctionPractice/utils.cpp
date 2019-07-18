#include <iostream>
#include "utils.h"

using namespace std;

void showMenu() {
	cout << "1. Search" << endl;
	cout << "2. View Record" << endl;
	cout << "3. Quit" << endl;
	cout << "Enter Selection: " << flush;
}

int getInput() {
	int aInput;
	cin >> aInput;
	return aInput;
}

void update(int aInput) {
	switch (aInput)
	{
	case 1:
		cout << "Searching ..." << endl;
		break;
	case 2:
		cout << "Viewing ..." << endl;
		break;
	case 3:
		cout << "Quitting ..." << endl;
		break;
	default:
		cout << "Please select an item from the menu." << endl;
		break;
	}
}
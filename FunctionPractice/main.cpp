#include <iostream>

using namespace std;

// Prototype or Declaration above main, allows you to write functions after main.
void showMenu();
int getInput();
void update(int aInput);

int main() {
	showMenu();
	int input = getInput();
	update(input);
	return 0;
}

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
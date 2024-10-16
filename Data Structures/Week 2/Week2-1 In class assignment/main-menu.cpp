#include <iostream>

using namespace std;

void displayMenu(); //Prototype function

int main() {
	displayMenu();
	return 0;
}

void displayMenu()
{
	cout << "1) Open new account " << endl;
	cout << "2) Log into existing account" << endl;
	cout << "3) Help" << endl;
	cout << "4) Quit" << endl;
	cout << endl << "Enter a command: ";
	int x; // choice value
}
#include <iostream>
#include "ContactList.h"

using namespace std;

int main() {

	ContactList<int> numbers;

	numbers.insert(4);
	numbers.insert(3);
	numbers.insert(7);
	numbers.insert(2);
	numbers.insert(5);
	numbers.insert(9);
	numbers.insert(10);

    cout << "Unsorted" << endl;
	numbers.print();
	int i = numbers.search(4);
	cout << endl;
	cout << "buffer[" << i << "] = " << numbers.at(i) << endl;
	cout << endl;
	numbers.sort();
	i = numbers.search(4);
	numbers.print();
	cout << endl;
	cout << "buffer[" << i << "] = " << numbers.at(i) << endl;
	cout << endl;
	

	return 0;
}   
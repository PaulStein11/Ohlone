#include <iostream>
#include "vector.h"

using namespace std;

int main() {

	Vector<int> numbers;

	numbers.push_back(4);
	numbers.push_back(3);
	numbers.push_back(7);
	numbers.push_back(2);
	numbers.push_back(5);
	numbers.push_back(9);
	numbers.push_back(10);

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
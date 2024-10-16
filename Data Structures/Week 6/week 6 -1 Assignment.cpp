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

	/*for (int i = 0; i < numbers.size(); i++) {
		cout << numbers.at(i) << " ";
	}*/
	cout << "Unsorted: " << endl;
	numbers.print();
	cout << endl;
    int i = numbers.search(4);
    cout << "Value is: [" << i << "] = " << numbers.at(i) << endl;
	cout << "Sorted: " << endl;
	numbers.sort();
	numbers.print();
	cout << endl;
    i = numbers.search(4);
    cout << "Value is: [" << i << "] = " << numbers.at(i) << endl;
	return 0;
}
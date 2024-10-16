#ifndef ARRAYLIST_H
#define ARRAYLIST_H

#include <ostream>

using namespace std;

class ArrayList {

public:
	ArrayList(int capacity=4);

	void append(int newItem);
	void resize(int newAllocationSize);
	void prepend(int newItem);
	void insertAfter(int index, int newItem);
	int  search(int item);
	void removeAt(int index);
	void print(ostream& printStream);
	void printInfo(ostream& printStream);

private:
	int* arrayData;          // Pointer to array data
	int arrayListLength;     // Number of elements in use
	int arrayAllocationSize; // Allocation size, in number of elements

};

#endif
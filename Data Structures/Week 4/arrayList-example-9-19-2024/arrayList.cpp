#include <iostream>
#include <ostream>
#include "arrayList.h"

using namespace std;

ArrayList::ArrayList(int capacity) {
	arrayAllocationSize = capacity;
	arrayData = new int[capacity];
	arrayListLength = 0;
}

/**
*
*/
void ArrayList::append(int newItem) {
	// Resize if the array is full
	if (arrayAllocationSize == arrayListLength) {
		resize(arrayListLength * 2);
	}

	// Insert the new item at index arrayListLength
	arrayData[arrayListLength] = newItem;

	// Increment arrayListLength to reflect the added item
	++arrayListLength;
}

void  ArrayList::resize(int newAllocationSize) {
	// Create a new array with the indicated size
	int* newArray = new int[newAllocationSize];

	// Copy items in current array into the new array
	for (int i = 0; i < arrayListLength; ++i) {
		newArray[i] = arrayData[i];
	}

	// Free current array
	delete[] arrayData;

	// Assign the arrayData member with the new array
	arrayData = newArray;

	// Update allocation size
	arrayAllocationSize = newAllocationSize;
}

void  ArrayList::prepend(int newItem) {
	// Resize if the array is full
	if (arrayAllocationSize == arrayListLength) {
		resize(arrayListLength * 2);
	}

	// Shift all array items to the right,
	// starting from the last index and moving
	// down to the first index.
	for (int i = arrayListLength; i > 0; --i) {
		arrayData[i] = arrayData[i - 1];
	}

	// Insert the new item at index 0
	arrayData[0] = newItem;

	// Increment arrayListLength to reflect the added item
	++arrayListLength;
}

void  ArrayList::insertAfter(int index, int newItem) {
	// Resize if the array is full
	if (arrayAllocationSize == arrayListLength) {
		resize(arrayListLength * 2);
	}

	// Shift all the array items to the right,
	// starting from the last item and moving down to
	// the item just past the given index.
	for (int i = arrayListLength; i > index + 1; --i) {
		arrayData[i] = arrayData[i - 1];
	}

	// Insert the new item at the index just past the
	// given index.
	arrayData[index + 1] = newItem;

	// Increment arrayListLength to reflect the inserted item
	++arrayListLength;
}

int  ArrayList::search(int item) {
	// Iterate through the entire array
	for (int i = 0; i < arrayListLength; ++i) {
		// If the current item matches the search
		// item, return the current index immediately.
		if (arrayData[i] == item) {
			return i;
		}
	}

	// If the above loop finishes without returning,
	// then the search item was not found.
	return -1;
}

void  ArrayList::removeAt(int index) {
	// Make sure the index is valid for the current array
	if (index >= 0 && index < arrayListLength) {
		// Shift down all items after the given index
		for (int i = index; i < arrayListLength - 1; ++i) {
			arrayData[i] = arrayData[i + 1];
		}

		// Update arrayListLength to reflect the removed item
		--arrayListLength;
	}
}

void  ArrayList::print(ostream& printStream) {
	for (int i = 0; i < arrayListLength; ++i) {
		printStream << arrayData[i] << " ";
	}
}

void  ArrayList::printInfo(ostream& printStream) {
	printStream << "Allocation size: " << arrayAllocationSize;
	printStream << ", length: " << arrayListLength;
}
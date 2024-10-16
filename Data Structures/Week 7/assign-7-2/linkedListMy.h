#ifndef MY_LINKED_LIST_H
#define
#include "linkedList.h"

template<typename T> // Replace to Manager List for Lab 4
class MyLinkedList : public LinkedList<T>
{
public:
	void sort() {/*TODO*/selectionSort(); };
	int search(T element) { /*TODO*/ return -1; };
	void print();
private:
	// TODO:
	bool sort = false; // By default will be false
	void binSearch(T element) { /*TODO*/ };
	void selectionSort() { /*TODO*/ };

};

#endif
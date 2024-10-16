#ifndef S_ARRAY_LIST_H
#define S_ARRAY_LIST_H
#include "arrayList.h"

#include <iostream>

using namespace std;

template<typename T>
class SelectionArrayList : public ArrayList<T> {
public:
	SelectionArrayList();
	void sort();

private:
	void selectionSort();
};

template<typename T>
SelectionArrayList<T>::SelectionArrayList() : ArrayList<T>() {

}

template<typename T>
void SelectionArrayList<T>::sort() {
    selectionSort();
}

template<typename T>
void SelectionArrayList<T>::selectionSort() {
    int i, j, min_idx;

    // One by one move boundary of  
    // unsorted subarray  
    for (i = 0; i < this->size() - 1; i++) {
        // Find the minimum element in  
        // unsorted array  
        min_idx = i;
        for (j = i + 1; j < this->size(); j++)
            if (this->buffer[j] > this->buffer[min_idx])
                min_idx = j;

        // Swap the found minimum element  
        // with the first element  
        this->swap(this->buffer[min_idx], this->buffer[i]);
    }
}

#endif
#ifndef S_CONTACT_LIST_H
#define S_CONTACT_LIST_H
#include "arrayList.h"

#include <iostream>

using namespace std;

template<typename T>
class ContactList : public ArrayList<T> {
public:
	ContactList();
	void sort();

private:
	void quickSort(int low, int high);
	int partition(int low, int high);

};


template<typename T>
ContactList<T>::ContactList() : ArrayList<T>() {

}

template<typename T>
void ContactList<T>::sort() {
    quickSort(0, this->size() - 1);
}

template<typename T>
int ContactList<T>::partition(int low, int high) {
    
    // Choose the pivot
    int pivot = this->buffer[high];
  
    // Index of smaller element and indicates 
    // the right position of pivot found so far
    int i = low - 1;

    // Traverse arr[;ow..high] and move all smaller
    // elements on left side. Elements from low to 
    // i are smaller after every iteration
    for (int j = low; j <= high - 1; j++) {
        if (this->buffer[j] < pivot) {
            i++;
            this->swap(this->buffer[i], this->buffer[j]);
        }
    }
    
    // Move pivot after smaller elements and
    // return its position
    swap(this->buffer[i + 1], this->buffer[high]);  
    return i + 1;
    
}
template<typename T>
void ContactList<T>::quickSort(int low, int high) {
    if (low < high) {
      
        // pi is the partition return index of pivot
        int pivot = partition(low, high);

        // Recursion calls for smaller elements
        // and greater or equals elements
        quickSort(low, pivot - 1);
        quickSort(pivot + 1, high);
    }
}
//template<typename T>
/*void ContactList<T>::quickSort() {
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
}*/

#endif 
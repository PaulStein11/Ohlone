#ifndef VECTOR_H
#define VECTOR_H
#include <iostream>
#include "abstractArrayList.h"

using namespace std;

template<typename T>
class Vector : public AbstractArrayList<T> {
public:
    Vector();
    ~Vector();
    //int size() const;
    
    void push_back(T element);
    void insert(int k, T element);
    
    T& at(int k);
    void erase(int k);
    
    void sort();
    int search(T elment);
    
    virtual void remove(T element)  { };
    
    void print();

private:
    T* buffer;
    int capacity;
    bool sorted = false;
    //int len;
    void grow_if_necessary();
    void bubbleSort();
    void swap(T& a, T& b);
    int binarySearch(T element);
    int searchSeq(T elment);
};

template<typename T>
Vector<T>::Vector() {
    const int INITIAL_CAPACITY = 5;
    buffer = new T[INITIAL_CAPACITY]; // Use T instead of int
    capacity = INITIAL_CAPACITY;
    this->len = 0;
}

template<typename T>
Vector<T>::~Vector() {
    if (buffer != nullptr) {
        delete[] buffer;
    }
    buffer = nullptr;
}

template<typename T>
T& Vector<T>::at(int k) { // Return type should be T&, and parameter should be int
    if (k < 0 || k >= this->size()) {
        throw std::out_of_range("Index out of range");
    }
    return buffer[k];
}

template<typename T>
void Vector<T>::push_back(T element) {
    grow_if_necessary();
    buffer[this->size()] = element;
    //len++;
    this->increment();
}

template<typename T>
void Vector<T>::insert(int k, T element) { // The index should be an int
    if (k < 0 || k > this->size()) {
        throw std::out_of_range("Index out of range");
    }
    grow_if_necessary();
    for (int i = this->size(); i > k; i--) {
        buffer[i] = buffer[i - 1];
    }
    buffer[k] = element;
    //len++; 
    this->increment();
}

template<typename T>
void Vector<T>::erase(int k) { // The index should be an int
    if (k < 0 || k >= this->size()) {
        throw std::out_of_range("Index out of range");
    }
    for (int i = k + 1; i < this->size(); i++) {
        buffer[i - 1] = buffer[i];
    }
    //len--;
    this->increment();
}

template<typename T>
void Vector<T>::grow_if_necessary() {
    if (this->size() == capacity) {
        capacity = 2 * capacity;
        T* larger_buffer = new T[capacity]; // Use T instead of int
        for (int i = 0; i < this->size(); i++) {
            larger_buffer[i] = buffer[i];
        }
        delete[] buffer;
        buffer = larger_buffer;
    }
}

template <typename T>
void Vector<T>::print() {
    
	for (int i = 0; i < this->size(); i++) {
		cout << buffer[i] << " ";
	}    
}

template <typename T>
void Vector<T>::sort() {
    bubbleSort();
    sorted = true;
}

template <typename T>
void Vector<T>::bubbleSort() {
    for (int i = 0; i < this->size() - 1; i++) {
        for (int j = 0; j < this->size() - i - 1; j++) {
            if (buffer[j] > buffer[j + 1]) {
                // Swap elements
                swap(buffer[j], buffer[j+1]);
            }
        }
    }
}

template <typename T>
void Vector<T>::swap(T& a, T& b) {
    // Swap elements
    T temp = a;
    a = b;
    b = temp;
}

template <typename T>
int Vector<T>::search(T element) {
    //return sorted ? binarySearch(element) : searchSeq(element);
    if (sorted) {
        return binarySearch(element);
    } else {
        return searchSeq(element);
    }
}
    
template <typename T>
int Vector<T>::searchSeq(T element) {
    for (int i=0;i< this->size(); i++) {
        if (buffer[i] == element) {
            return i;
        }   
    }
    return -1;
}

template <typename T>
int Vector<T>::binarySearch(/*int array[], int size,*/ T element) {
    int low = 0, high = this->size() - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (buffer[mid] == element)
            return mid;
        else if (buffer[mid] < element)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1; // Element not found
}

#endif


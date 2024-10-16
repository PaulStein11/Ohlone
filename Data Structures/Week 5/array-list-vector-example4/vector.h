#ifndef VECTOR_H
#define VECTOR_H
#include "abstractArrayList.h"

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
    
    virtual void sort() { };
    virtual T& search(T elment) { T e; return e; }
    virtual void remove(T element)  { };

private:
    T* buffer;
    int capacity;
    //int len;
    void grow_if_necessary();
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
#endif


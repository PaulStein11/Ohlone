#ifndef VECTOR_H 
#define VECTOR_H

#include "list.h"

template <typename T>

class Vector : public List<T>
{
public:
	Vector();
	~Vector();
	T size() const;
	T& at(T k);
	void push_back(T element);
	void insert(T k, T element);
	void erase(T k);

private:
	T* buffer;
	T capacity;
	void grow_if_necessary();

};
#include "vector.h" 

template<typename T>
Vector::Vector()
{
    const int INITIAL_CAPACITY = 5;
    buffer = new int[INITIAL_CAPACITY];
    capacity = INITIAL_CAPACITY;
    len = 0;
}
template<typename T>
Vector::~Vector()
{
    if (buffer != nullptr)
    {
        delete[] buffer;
    }
}
template<typename T>
int Vector::size() const
{
    return len;
}
template<typename T>

int& Vector::at(int k)
{
    return buffer[k];
}
template<typename T>

void Vector::push_back(T element)
{
    grow_if_necessary();
    buffer[len] = element;
    len++;
}
template<typename T>

void Vector::insert(int k, T element)
{
    grow_if_necessary();
    len++;

    for (int i = len - 1; i > k; i--)
    {
        buffer[i] = buffer[i - 1];
    }

    buffer[k] = element;
}
template<typename T>

void Vector::erase(int k)
{
    for (int i = k + 1; i < len; i++)
    {
        buffer[i - 1] = buffer[i];
    }
    len--;
}
template<typename T>

void Vector::grow_if_necessary()
{
    if (len == capacity)
    {
        capacity = 2 * capacity;
        int* larger_buffer = new int[capacity];
        for (int i = 0; i < len; i++)
        {
            larger_buffer[i] = buffer[i];
        }
        delete[] buffer; // The old buffer is no longer needed
        buffer = larger_buffer;
    }
}

#endif


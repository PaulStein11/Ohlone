#ifndef VECTOR_H 
#define VECTOR_H
#include "list.h"

template <typename T>
class Vector : public List<T>
{
public:
   Vector();
   ~Vector();
   int size() const;
   int& at(int k) ;
   void push_back(T element);
   void insert(int k, T element);
   void erase(int k);
   
private:
   T* buffer;
   int capacity;
   int len;
   void grow_if_necessary();

};

template <typename T>
Vector<T>::Vector() : List<T>()
{
   const int INITIAL_CAPACITY = 5;
   buffer = new T[INITIAL_CAPACITY];
   capacity = INITIAL_CAPACITY;
   len = 0;
}
template <typename T>
Vector<T>::~Vector()
{
    if(buffer != nullptr)
    {
        delete[] buffer;
    }
}
template <typename T>
int Vector<T>::size() const
{
   return len;
}
template <typename T>
int& Vector<T>::at(int k)
{
   return buffer[k];
}
template <typename T>
void Vector<T>::push_back(T element)
{
   grow_if_necessary();
   buffer[len] = element;
   len++;
}
template <typename T>
void Vector<T>::insert(int k, T element)
{
   grow_if_necessary();
   len++;
   
   for (int i = len - 1; i > k; i--)
   {
      buffer[i] = buffer[i - 1];
   }

   buffer[k] = element;
}
template <typename T>
void Vector<T>::erase(int k)
{
   for (int i = k + 1; i < len; i++)
   {
      buffer[i - 1] = buffer[i];
   }   
   len--; 
}
template <typename T>
void Vector<T>::grow_if_necessary()
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


#ifndef VECTOR_H 
#define VECTOR_H

class Vector
{
public:
   Vector();
   int size() const;
   int& at(int k) ;
   void push_back(int element);
   void insert(int k, int element);
   void erase(int k);
   void grow_if_necessary();
   
private:
   int* buffer;
   int capacity;
   int len;
};

#endif


#ifndef LIST_H 
#define LIST_H

template <typename T>

class List
{
public:   
   virtual T size() {
       return len;
   };
   virtual T& at(int k) = 0;
   virtual void push_back(T element) = 0;
   virtual void insert(int k, T element) = 0;
   virtual void erase(int k) = 0;
protected:
   int len;
};

#endif
#ifndef LIST_H
#define LIST_H

template <typename T>
class List {
public:
    virtual int size() {
        return len;
    };
    
    virtual void push_back(T element) = 0;
    virtual void insert(int k, T element) = 0;
    virtual void sort() = 0;
    virtual T& search(T elment) = 0;
    virtual void remove(T element) = 0;
    
    //virtual T& at(int k) = 0;
    //virtual void erase(int k) = 0;
protected:
    
    int len;
    
    int increment() { return ++len; }
};

#endif

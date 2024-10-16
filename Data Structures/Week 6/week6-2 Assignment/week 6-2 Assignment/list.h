#ifndef LIST_H
#define LIST_H

template <typename T>
class List {
public:
    virtual int size() {
        return len;
    };
    
    virtual void push_back(T element) = 0;
    virtual void sort() = 0;
    virtual int search(T elment) = 0;
    virtual void remove(T element) = 0;
    
    virtual void print() = 0;
protected:
    
    int len;
    
    int increment() { return ++len; }
};

#endif

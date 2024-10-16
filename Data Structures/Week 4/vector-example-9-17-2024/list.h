#ifndef LIST_H 
#define LIST_H

template<typename T>

class List
{
public:
    // Virtual points to the base class
    virtual int size() {
        return len;
    };

    virtual int& at(int k) = 0;
    virtual void push_back(T element) = 0;
    virtual void insert(int k, T element) = 0;
    virtual void erase(int k) = 0;
    //Protected only the derived clss can access the protected method of the class

protected:
    int len;
};

#endif
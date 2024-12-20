#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <string>

using namespace std;

class LinkedList;
class Iterator;

class Node {
public:
    /**
       Constructs a node with a given data value.
       @param element the data to store in this node
    */
    Node(string element);
private:
    string data;
    Node* previous;
    Node* next;
    friend class LinkedList;
    friend class Iterator;
};

class LinkedList {
public:
    /**
       Constructs an empty list.
    */
    LinkedList();
    /**
       Appends an element to the list.
       @param element the value to append
    */
    void insert(string element);
    /**
       Inserts an element into the list.
       @param iter the position before which to insert
       @param element the value to insert
    */
    void insert(Iterator iter, string element);
    /**
       Retrieves the k'th element of the list
       @param k the position to be retrieved (zero-based)
       @return the element at position k, error if no such position
    */
    string get(int k);
    /**
       Removes an element from the list.
       @param iter the position to remove
       @return an iterator pointing to the element after the
       erased element
    */
    Iterator erase(Iterator iter);
    /**
       Gets the beginning position of the list.
       @return an iterator pointing to the beginning of the list
    */
    Iterator begin();
    /**
       Gets the past-the-end position of the list.
       @return an iterator pointing past the end of the list
    */
    Iterator end();
private:
    Node* first;
    Node* last;
    Node* last_node;
    int last_index;
    friend class Iterator;
};

class Iterator {
public:
    /**
       Constructs an iterator that does not point into any list.
    */
    Iterator();
    /**
       Looks up the value at a position.
       @return the value of the node to which the iterator points
    */
    string get() const;
    /**
       Advances the iterator to the next node.
    */
    void next();
    /**
       Moves the iterator to the previous node.
    */
    void previous();
    /**
       Compares two iterators.
       @param other the iterator to compare with this iterator
       @return true if this iterator and other are equal
    */
    bool equals(Iterator other) const;
private:
    Node* position;
    LinkedList* container;
    friend class LinkedList;
};

#endif

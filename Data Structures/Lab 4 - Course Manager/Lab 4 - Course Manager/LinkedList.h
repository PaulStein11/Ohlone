#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <string>
#include <iostream>

using namespace std;

template <typename T>
class LinkedList;
template <typename T>
class Iterator;

/**************************** NODE CLASS **************************************/
template <typename T>
class Node {
public:
    Node(T element);
    T data;
    Node* previous;
    Node* next;
    friend class LinkedList<T>;
    friend class Iterator<T>;
};

//********************************** Implementation of Node class
template <typename T>
Node<T>::Node(T element) {
    data = element;
    previous = nullptr;
    next = nullptr;
}
/******************************************************************/

/**************************** LINKED LIST CLASS **************************************/
template <typename T>
class LinkedList {
public:
    LinkedList();
    void insert(T element);
    void insert(Iterator<T> iter, T element);
    T get(int k);
    Iterator<T> erase(Iterator<T> iter);
    Iterator<T> begin();
    Iterator<T> end();

    void sort();
    void selectionSort();
    int search(T element);
    void remove(T element);
    void print();
protected:
    Node<T>* first;
    Node<T>* last;
    Node<T>* last_node;
    friend class Iterator<T>;
private:
    // Do I need a Node with position argument?
    int last_index;
};

//********************************** Implementation of LinkedList class
template <typename T>
LinkedList<T>::LinkedList() {
    first = nullptr;
    last = nullptr;
    last_node = nullptr;
    last_index = -1;
}

template <typename T>
void LinkedList<T>::insert(T element) {
    Node<T>* new_node = new Node<T>(element);
    if (last == nullptr) {
        first = new_node;
        last = new_node;
    }
    else {
        new_node->previous = last;
        last->next = new_node;
        last = new_node;
    }
}

template <typename T>
void LinkedList<T>::insert(Iterator<T> iter, T element) {
    if (iter.position == nullptr) {
        insert(element);
        return;
    }

    Node<T>* after = iter.position;
    Node<T>* before = after->previous;
    Node<T>* new_node = new Node<T>(element);
    new_node->previous = before;
    new_node->next = after;
    after->previous = new_node;
    if (before == nullptr) {
        first = new_node;
    }
    else {
        before->next = new_node;
    }
}

template <typename T>
T  LinkedList<T>::get(int k) {
    Node<T>* n = first;
    int i = 0;
    while (i < k && n != nullptr) {
        n = n->next;
        i++;
    }
    return (n != nullptr) ? n->data : T();
}
template <typename T>
void LinkedList<T>::sort()
{
    selectionSort();
}
template <typename T>
void LinkedList<T>::selectionSort() {
    if (first == nullptr || first->next == nullptr) return;

    // Outer loop: Traverse the list
    for (Node<T>* i = first; i != nullptr; i = i->next) {
        Node<T>* min = i;

        // Inner loop: Find the minimum element in the unsorted portion
        for (Node<T>* j = i->next; j != nullptr; j = j->next) {
            if (j->data < min->data) {
                min = j;
            }
        }

        // Swap the data of the current node with the node containing the minimum element
        if (min != i) {
            T temp = i->data;
            i->data = min->data;
            min->data = temp;
        }
    }
}

template <typename T>
int LinkedList<T>::search(T element)
{
    Node<T>* current = first;
    int index = 0;

    // Traverse the list
    while (current != nullptr) {
        if (current->data == element) {
            return index;  // Return the index if the element is found
        }
        current = current->next;
        index++;
    }
    return -1;

}

template <typename T>
void LinkedList<T>::remove(T element) {
    Node<T>* current = first;

    // Traverse the list to find the node with the element
    while (current != nullptr) {
        if (current->data == element) {
            // If the node to remove is the first node
            if (current == first) {
                first = current->next;
                if (first != nullptr) {
                    first->previous = nullptr;  // Update the new first node's previous pointer
                }
            }
            // If the node to remove is the last node
            if (current == last) {
                last = current->previous;
                if (last != nullptr) {
                    last->next = nullptr;  // Update the new last node's next pointer
                }
            }
            // If the node is in the middle
            if (current->previous != nullptr) {
                current->previous->next = current->next;
            }
            if (current->next != nullptr) {
                current->next->previous = current->previous;
            }

            // Free the memory
            delete current;
            return;  // Exit after removing the first matching element
        }
        current = current->next;
    }
}


template <typename T>
void LinkedList<T>::print()
{
    Node<T>* current = first;
    while (current != nullptr) {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;
}
/******************************************************************/

/**************************** ITERATOR CLASS **************************************/
template <typename T>
class Iterator {
public:
    Iterator();
    T get() const;
    void next();
    void previous();
    bool equals(Iterator<T> other) const;
private:
    Node<T>* position;
    LinkedList<T>* container;
    friend class LinkedList<T>;
};

//********************************** Implementation of Iterator class
template <typename T>
Iterator<T> LinkedList<T>::erase(Iterator<T> iter) {
    Node<T>* remove = iter.position;
    Node<T>* before = remove->previous;
    Node<T>* after = remove->next;
    if (remove == first) {
        first = after;
    }
    else {
        before->next = after;
    }

    if (remove == last) {
        last = before;
    }
    else {
        after->previous = before;
    }
    delete remove;
    iter.position = after;
    return iter;
}

template <typename T>
Iterator<T> LinkedList<T>::begin() {
    Iterator<T> iter;
    iter.position = first;
    iter.container = this;
    return iter;
}

template <typename T>
Iterator<T> LinkedList<T>::end() {
    Iterator<T> iter;
    iter.position = nullptr;
    iter.container = this;
    return iter;
}

// Implementation of Iterator class
template <typename T>
Iterator<T>::Iterator() {
    position = nullptr;
    container = nullptr;
}

template <typename T>
T Iterator<T>::get() const {
    return position->data;
}

template <typename T>
void Iterator<T>::next() {
    position = position->next;
}

template <typename T>
void Iterator<T>::previous() {
    position = (position == nullptr) ? container->last : position->previous;
}

template <typename T>
bool Iterator<T>::equals(Iterator<T> other) const {
    return position == other.position;
}

/******************************************************************/

#endif

#ifndef DOUBLE_LINKED_LIST_H
#define DOUBLE_LINKED_LIST_H

#include "Node.h"

class DoubleLinkedList {
public:
    DoubleLinkedList();
    ~DoubleLinkedList();

    void add2Head(int val);
    void delFromHead();
    void add2Center(int val);
    void delFromCenter(int val);
    void printList();

private:
    Node* root;
    void clear();
};

#endif // DOUBLE_LINKED_LIST_H

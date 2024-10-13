#ifndef SINGLE_LINKED_LIST_H
#define SINGLE_LINKED_LIST_H

#include "Node.h"

class SingleLinkedList {
public:
    SingleLinkedList();
    ~SingleLinkedList();

    void add2Head(int val);
    void delFromHead();
    void add2Center(int val);
    void deleteFromCenter(int val);
    void printList();

private:
    Node* root;
    void clear();
};

#endif // SINGLE_LINKED_LIST_H

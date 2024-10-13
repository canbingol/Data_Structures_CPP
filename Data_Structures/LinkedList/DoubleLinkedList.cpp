#include <iostream>
#include "DoubleLinkedList.h"

DoubleLinkedList::DoubleLinkedList() : root(nullptr) {}

DoubleLinkedList::~DoubleLinkedList() {
    clear();
}

void DoubleLinkedList::add2Head(int val) {
    Node* newNode = new Node(val);
    if (root != nullptr) {
        root->prev = newNode;
        newNode->next = root;
    }
    root = newNode;
}

void DoubleLinkedList::delFromHead() {
    if (root == nullptr) return;

    Node* temp = root;
    root = root->next;
    if (root != nullptr) {
        root->prev = nullptr;
    }
    delete temp;
}

void DoubleLinkedList::add2Center(int val) {
    if (root == nullptr) {
        add2Head(val);
        return;
    }

    if (val < root->data) {
        add2Head(val);
        return;
    }

    Node* newNode = new Node(val);
    Node* temp = root;
    while (temp->next != nullptr && val > temp->next->data) {
        temp = temp->next;
    }

    newNode->next = temp->next;
    if (temp->next != nullptr) {
        temp->next->prev = newNode;
    }
    temp->next = newNode;
    newNode->prev = temp;
}

void DoubleLinkedList::delFromCenter(int val) {
    if (root == nullptr) return;

    if (val == root->data) {
        delFromHead();
        return;
    }

    Node* current = root;
    while (current != nullptr) {
        if (current->data == val) {
            Node* nodeToDelete = current;
            if (nodeToDelete->prev != nullptr) {
                nodeToDelete->prev->next = nodeToDelete->next;
            }
            if (nodeToDelete->next != nullptr) {
                nodeToDelete->next->prev = nodeToDelete->prev;
            }
            delete nodeToDelete;
            return;
        }
        current = current->next;
    }
}

void DoubleLinkedList::printList() {
    Node* current = root;
    while (current != nullptr) {
        std::cout << current->data << " <-> ";
        current = current->next;
    }
    std::cout << "nullptr" << std::endl;
}

void DoubleLinkedList::clear() {
    while (root != nullptr) {
        delFromHead();
    }
}

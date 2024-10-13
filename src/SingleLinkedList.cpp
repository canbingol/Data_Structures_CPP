#include <iostream>
#include "../include/SingleLinkedList.h"

SingleLinkedList::SingleLinkedList() : root(nullptr) {}

SingleLinkedList::~SingleLinkedList() {
    clear();
}

void SingleLinkedList::add2Head(int val) {
    Node* newNode = new Node(val);
    newNode->next = root;
    root = newNode;
}

void SingleLinkedList::delFromHead() {
    if (root == nullptr) return;

    Node* temp = root;
    root = root->next;
    delete temp;
}

void SingleLinkedList::add2Center(int val) {
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
    while (temp->next != nullptr && temp->next->data < val) {
        temp = temp->next;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

void SingleLinkedList::deleteFromCenter(int val) {
    if (root == nullptr) return;

    if (val == root->data) {
        delFromHead();
        return;
    }

    Node* current = root;
    while (current->next != nullptr) {
        if (current->next->data == val) {
            Node* nodeToDelete = current->next;
            current->next = nodeToDelete->next;
            delete nodeToDelete;
            return;
        }
        current = current->next;
    }
}

void SingleLinkedList::printList() {
    Node* current = root;
    while (current != nullptr) {
        std::cout << current->data << " -> ";
        current = current->next;
    }
    std::cout << "nullptr" << std::endl;
}

void SingleLinkedList::clear() {
    while (root != nullptr) {
        delFromHead();
    }
}

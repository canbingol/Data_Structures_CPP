#ifndef BINARY_TREE_H
#define BINARY_TREE_H

#include "Node.h"

class BinaryTree
{
public:
    BinaryTree();
    ~BinaryTree();
    void insert(int val);
    void clear();
    Node *insertRec(Node *node, int val);
    void inorderTraversal(Node* node);
    void preorderTraversal(Node* node);
    void postorderTraversal(Node* node);
    Node *root;
};

#endif // BINARY_TREE_H
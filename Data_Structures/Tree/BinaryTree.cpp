#include <iostream>
#include "BinaryTree.h"

BinaryTree::BinaryTree() : root(nullptr) {};
BinaryTree::~BinaryTree() {};

void BinaryTree::insert(int val)
{
    root = insertRec(root, val);
};

Node *BinaryTree::insertRec(Node *node, int val)
{
    if (node == nullptr)
        return new Node(val);
    if (node->data == val)
        return node;
    if (val > node->data)
        insertRec(node->right, val);
    else
        insertRec(node->left, val);

    return node;
};

void BinaryTree::inorderTraversal(Node *node)
{
    if (node != nullptr)
    {
        inorderTraversal(node->left);
        std::cout << node->data << " ";
        inorderTraversal(node->right);
    }
};

void BinaryTree::preorderTraversal(Node *node)
{
    if (node != nullptr)
    {
        std::cout << node->data << " ";
        preorderTraversal(node->left);
        preorderTraversal(node->right);
    }
}

void BinaryTree::postorderTraversal(Node *node)
{
    if (node != nullptr)
    {
        postorderTraversal(node->left);
        postorderTraversal(node->right);
        std::cout << node->data << " ";
    }
}
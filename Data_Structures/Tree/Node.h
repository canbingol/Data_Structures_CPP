#ifndef NODE_H
#define NODE_H

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int value);
};
#endif // TREE_NODE_H
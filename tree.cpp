#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left, *right;

    Node(int data)
    {
        this->data = data;
        left = right = nullptr;
    }
};

Node *binaryTree()
{
    int x;
    cin >> x;
    if (x == -1)
    {
        return nullptr;
    }

    Node *temp = new Node(x);

    // left side node
    cout << "left side node:" << x;
    temp->left = binaryTree();

    // right node
    cout << "enter the right side node:" << x;

    temp->right = binaryTree();

    return temp;
}
int main()
{

    cout << "enter the root value:";
    Node *root;
    root = binaryTree();
    return 0;
}
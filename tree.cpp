#include <bits/stdc++.h>
using namespace std;

class tree
{
public:
    int data;

    tree *left, *right;
    tree(int val)
    {
        data = val;
        left = right = nullptr;
    }
};



int main()
{
    int x;
    cout << "enter the root node:";
    cin >> x;
    int first, second;
    queue<tree *> q;
    tree *root = new tree(x);
    q.push(root);

    while (!q.empty())
    {
        tree *temp = q.front();
        q.pop();
        cout << "enter the left node of " << temp->data<< ":";

        cin >> first;

        // for left node
        if (first != -1)
        {
            temp->left = new tree(first);
            q.push(temp->left);
        }

        // for right node
        cout << "enter the right node of " << temp->data<< ":";

        cin >> second;

        if (second != -1)
        {
            temp->right = new tree(second);
            q.push(temp->right);
        }
    }

 
   return 0;
}
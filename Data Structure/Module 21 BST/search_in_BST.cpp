#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *input_Tree()
{
    Node *root;
    queue<Node *> q;
    int n;
    cin >> n;
    if (n == -1)
    {
        root = NULL;
    }
    else
    {
        root = new Node(n);
    }
    if (root != NULL)
    {
        q.push(root);
    }
    while (!q.empty())
    {
        Node *parent = q.front();
        q.pop();
        int l, r;
        cin >> l >> r;
        Node *myleft, *myright;
        if (l == -1)
        {
            myleft = NULL;
        }
        else
        {
            myleft = new Node(l);
        }
        if (r == -1)
        {
            myright = NULL;
        }
        else
        {
            myright = new Node(r);
        }
        parent->left = myleft;
        parent->right = myright;

        if (parent->left)
        {
            q.push(myleft);
        }
        if (parent->right)
        {
            q.push(myright);
        }
    }
    return root;
}

bool search(Node *root, int val)
{
    if (root == NULL)
    {
        return false;
    }
    if (root->val == val)
    {
        return true;
    }
    if (root->val > val)
    {
        return search(root->left, val);
    }
    else
    {
        return search(root->right, val);
    }
}
int main()
{
    Node *root = input_Tree();
    int val;
    cin >> val;
    if (search(root, val))
    {
        cout << "Paisi" << endl;
    }
    else
    {
        cout << "Painai" << endl;
    }
    return 0;
}
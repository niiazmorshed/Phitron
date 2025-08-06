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
void print_outer_left(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    if (root->left)
    {
        print_outer_left(root->left);
    }
    else
    {
        print_outer_left(root->right);
    }
    cout << root->val << " ";
}

void print_outer_right(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->val << " ";
    if (root->right)
    {
        print_outer_right(root->right);
    }
    else
    {
        print_outer_right(root->left);
    }
}
int main()
{
    Node *root = input_Tree();

    if (root->left == NULL)
    {
        print_outer_right(root);
    }
    else
    {
        print_outer_left(root);
        print_outer_right(root->right);
    }
    return 0;
}
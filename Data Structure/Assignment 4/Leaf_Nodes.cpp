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
vector<int> v;
vector<int> leaf_Node(Node *root)
{
    if (root == NULL)
    {
        return v;
    }
    if (root->left == NULL && root->right == NULL)
    {
        v.push_back(root->val);
    }
    leaf_Node(root->left);
    leaf_Node(root->right);
    return v;
}
int main()
{
    Node *root = input_Tree();
    vector<int> p = leaf_Node(root);
    sort(p.begin(), p.end(), greater<int>());
    for (int i : p)
    {
        cout << i << " ";
    }
}
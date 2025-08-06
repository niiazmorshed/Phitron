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

vector<int> level_order(Node *root, int val)
{
    vector<int> v;
    queue<pair<Node *, int>> q;
    if (root != NULL)
    {
        q.push({root, 0});
    }
    while (!q.empty())
    {
        pair<Node *, int> parent = q.front();
        q.pop();
        Node *node = parent.first;
        int level = parent.second;
        if (level == val)
        {
            v.push_back(node->val);
        }
        if (node->left)
        {
            q.push({node->left, level + 1});
        }
        if (node->right)
        {
            q.push({node->right, level + 1});
        }
    }
    return v;
}
int main()
{
    Node *root = input_Tree();
    vector<int> p;
    int v;
    cin >> v;
    p = level_order(root, v);
    if (p.size() == 0)
    {
        cout << "Invalid" << endl;
    }
    else
    {
        for (int i : p)
        {
            cout << i << " ";
        }
    }
    return 0;
}
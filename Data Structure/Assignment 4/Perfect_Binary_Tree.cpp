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
int count_node(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int l = count_node(root->left);
    int r = count_node(root->right);
    return l + r + 1;
}

int max_depth(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    if (root->left == NULL && root->right == NULL)
    {
        return 1;
    }
    int l = max_depth(root->left);
    int r = max_depth(root->right);
    return max(l, r) + 1;
}
int main()
{
    Node *root = input_Tree();
    int node = count_node(root);
    int mx = max_depth(root);
    int formula = pow(2, mx) - 1;
    if (formula == node)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}
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

Node *input_tree()
{
    int val;
    Node *root;
    cin >> val;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);

    queue<Node *> q;
    if (root != NULL)
        q.push(root);
    while (!q.empty())
    {
        // 1. Ber kore Anbo
        Node *p = q.front();
        q.pop();
        // 2. Ber kora Node niye Kaj;
        int l, r;
        cin >> l >> r;
        Node *myLeft, *myRight;

        if (l == -1)
            myLeft = NULL;
        else
            myLeft = new Node(l);
        if (r == -1)
            myRight = NULL;
        else
            myRight = new Node(r);

        p->left = myLeft;
        p->right = myRight;
        // 3. Children Push korbo

        if (p->left)
        {
            q.push(p->left);
        }
        if (p->right)
        {
            q.push(p->right);
        }
    }
    return root;
}

int count_Nodes(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int lft = count_Nodes(root->left);
    int rght = count_Nodes(root->right);
    return 1 + lft + rght;
}

int main()
{
    Node *root = input_tree();
    cout << count_Nodes(root);
    return 0;
}
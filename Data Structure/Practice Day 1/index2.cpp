#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void checkDuplicate(Node *&head)
{
    int fra[100] = {0};
    Node *temp = head;
    int count = 0;
    bool flag = false;
    while (temp != NULL)
    {
        fra[temp->val]++;
        temp = temp->next;
    }
    for (int i = 0; i < 100; i++)
    {
        if (fra[i] > 1)
        {
            flag = true;
        }
    }
    flag ? cout << "YES" : cout << "NO";
}

int main()
{
    Node *head = new Node(2);
    Node *a = new Node(1);
    Node *b = new Node(5);
    Node *c = new Node(3);
    Node *d = new Node(4);
    Node *e = new Node(8);
    Node *last = new Node(9);
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = last;

    checkDuplicate(head);
    return 0;
}
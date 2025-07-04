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
void checkSorted(Node *&head)
{
    bool flag = false;
    Node *temp = head;
    while (temp->next != NULL)
    {
        if (temp->val > temp->next->val)
        {
            flag = true;
            break ;
        }
        temp = temp->next;
    }

    flag ? cout << "Not Sorted" : cout << "Sorted";
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

    checkSorted(head);
    return 0;
}
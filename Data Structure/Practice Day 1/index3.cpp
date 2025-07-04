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
void printMiddle(Node *&head)
{
    Node *temp = head;
    int index = 0;
    while (temp != NULL)
    {
        index++;
        temp = temp->next;
    }
    int middle = 0;
    // cout << "Index: " << index << endl;
    middle = index / 2;
    // cout << "Middle: " << middle << endl;
    temp = head;
    for (int i = 1; i < middle; i++)
    {
        temp = temp->next;
    }
    if (index % 2 == 0)
    {
        cout << temp->val << " " << temp->next->val;
    }
    else
    {
        cout << temp->val;
    }
}

int main()
{
    Node *head = new Node(2);
    Node *a = new Node(1);
    Node *b = new Node(5);
    Node *c = new Node(3);
    Node *d = new Node(4);
    Node *e = new Node(8);
    // Node *last = new Node(9);
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    // e->next = last;

    printMiddle(head);
    return 0;
}
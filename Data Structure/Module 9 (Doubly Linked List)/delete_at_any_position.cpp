#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *prev;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->prev = NULL;
        this->next = NULL;
    }
};
void delete_at_any_position(Node *head, int index)
{
    Node *temp = head;
    for (int i = 0; i < index - 1; i++)
    {
        temp = temp->next;
    }
    Node *deleteNode = temp->next;
    temp->next = temp->next->next;
    temp->next->prev = temp;
    delete deleteNode;
}
void print_forward(Node *head)
{
    Node *temp = head;  
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}
int main()
{
    Node *head = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(30);
    Node *tail = new Node(40);

    head->next = b;
    b->prev = head;
    b->next = c;
    c->prev = b;
    c->next = tail;
    tail->prev = c;

    delete_at_any_position(head, 2);
    print_forward(head);
    return 0;
}
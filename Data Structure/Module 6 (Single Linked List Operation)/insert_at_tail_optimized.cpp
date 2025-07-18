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

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
void printingLinkedList(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << endl;
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
    head->next->next = c;
    head->next->next->next = tail;

    insert_at_tail(head, tail, 97);
    insert_at_tail(head, tail, 98);

    printingLinkedList(head);
    cout << "Tail : " << tail->val;
    return 0;
}

// Drawing theke Code
// Code theke Drawing
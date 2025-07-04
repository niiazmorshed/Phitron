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

void insert_at_anyPosition(Node *&head, int index, int val)
{
    Node *newNode = new Node(val);
    Node *temp = head;
    for (int i = 0; i < index - 1; i++)
    {
        temp = temp->next;
        if (temp == NULL)
        {
            return;
        }
    }
    newNode->next = temp->next;
    temp->next = newNode;
}
void printingLinkedList(Node *head)
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
    Node *d = new Node(40);

    head->next = b;
    head->next->next = c;
    head->next->next->next = d;

    insert_at_anyPosition(head, 1, 9);
    printingLinkedList(head);
    return 0;
}
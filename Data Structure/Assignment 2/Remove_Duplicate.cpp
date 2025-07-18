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
void delete_duplicate(Node *&head)
{

    Node *deleteNode;
    Node *index = head;
    while (index != NULL)
    {
        Node *temp = index;
        while (temp->next != NULL)
        {
            if (index->val == temp->next->val)
            {
                deleteNode = temp->next;
                temp->next = temp->next->next;
                delete deleteNode;
            }
            else
            {
                temp = temp->next;
            }
        }
        index = index->next;
    }
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
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_at_tail(head, tail, val);
    }
    delete_duplicate(head);

    printingLinkedList(head);
    return 0;
}
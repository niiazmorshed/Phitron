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
void insert_at_head(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head = newNode;
}
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

void delete_head(Node *&head)
{
    if (head == NULL)
    {
        return;
    }
    Node *delete_Node = head;
    head = head->next;
    delete delete_Node;
}
void delete_at_any_position(Node *&head, Node *&tail, int index)
{
    Node *temp = head;
    for (int i = 0; i < index - 1; i++)
    {
        temp = temp->next;
    }
    Node *deleteNode = temp->next;
    temp->next = temp->next->next;
    if (deleteNode == tail)
    {
        tail = temp;
    }

    delete deleteNode;
}
int size_of_linkedList(Node *head)
{
    Node *temp = head;
    int len = 0;
    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}
void printingLinkedList(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << "\n";
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int q, val;
        cin >> q >> val;
        ;
        if (q == 0)
        {
            insert_at_head(head, tail, val);
        }
        else if (q == 1)
        {
            insert_at_tail(head, tail, val);
        }
        else
        {
            int size = size_of_linkedList(head); 
            if (size > val)
            {
                if (val == 0)
                {
                    delete_head(head);
                }
                else
                {
                    delete_at_any_position(head, tail, val);
                }
            }
        }
        printingLinkedList(head);
    }
    return 0;
}
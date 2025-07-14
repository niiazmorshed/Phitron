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

void insert_head(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}
void insert_at_any_position(Node *&head, int index, int val)
{
    Node *newNode = new Node(val);
    Node *temp = head;
    for (int i = 0; i < index - 1; i++)
    {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next->prev = newNode;
    temp->next = newNode;
    newNode->prev = temp;
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
    newNode->prev = tail;
    tail = newNode;
}
int size(Node *head)
{
    int counter = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        counter++;
        temp = temp->next;
    }
    return counter;
}

void print(Node *head, Node *tail)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
    temp = tail;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->prev;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    cin >> val;
    for (int i = 0; i < val; i++)
    {
        int x, v;
        cin >> x >> v;
        int len = size(head);
        if (x > len)
        {
            cout << "Invalid" << endl;
        }
        else if (x == 0)
        {
            insert_head(head, tail, v);
            print(head, tail);
        }
        else if (x == len)
        {
            insert_at_tail(head, tail, v);
            print(head, tail);
        }
        else
        {
            insert_at_any_position(head, x, v);
            print(head, tail);
        }
    }

    return 0;
}
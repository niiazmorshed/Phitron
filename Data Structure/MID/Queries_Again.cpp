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
    head->prev = newNode;
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
    newNode->prev = tail;
    tail = newNode;
}
void insert_at_any_position(Node *&head, Node *&tail, int index, int val)
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
int size(Node *head)
{
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}
void print(Node *head, Node *tail)
{
    Node *temp = head;
    cout << "L -> ";
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
    temp = tail;
    cout << "R -> ";
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
    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int v, x;
        cin >> x >> v;
        int length = size(head);
        if (length < x)
        {
            cout << "Invalid" << endl;
        }
        else if (x == 0)
        {
            insert_at_head(head, tail, v);
            print(head, tail);
        }
        else if (length == x)
        {
            insert_at_tail(head, tail, v);
            print(head, tail);
        }
        else
        {
            insert_at_any_position(head, tail, x, v);
            print(head, tail);
        }
    }
    return 0;
}
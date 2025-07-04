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
void insert_at_any_position(Node *head, int index, int value)
{
    Node *newNode = new Node(value);
    Node *temp = head;
    for (int i = 0; i < index - 1; i++)
    {
        temp = temp->next;
        if (temp->next == NULL)
        {
            return;
        }
    }
    newNode->next = temp->next;
    temp->next = newNode;
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
void print_linkedList(Node *&head)
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
    int index, value, q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        cin >> index >> value;
        int size = size_of_linkedList(head);
        if (index > size)
        {
            cout << "Invalid" << endl;
            continue;
        }
        else if (index == size)
        {
            insert_at_tail(head, tail, value);
        }
        else if (index == 0)
        {
            insert_at_head(head, tail, value);
        }
        else
        {
            insert_at_any_position(head, index, value);
        }
        print_linkedList(head);
    }

    return 0;
}
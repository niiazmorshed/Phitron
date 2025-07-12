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

void check_Palindrom(Node *&head, Node *&tail)
{
    Node *tempHead = head;
    Node *tempTail = tail;
    bool flag = true;
    while (tempHead != tempTail)
    {
        if (tempHead->val != tempTail->val)
        {
            flag = false;
            break;
        }
        tempHead = tempHead->next;
        tempTail = tempTail->prev;
    }
    flag ? cout << "YES" : cout << "NO";
}
void print_forward(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
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
    check_Palindrom(head, tail);
    // print_forward(head);
    return 0;
}
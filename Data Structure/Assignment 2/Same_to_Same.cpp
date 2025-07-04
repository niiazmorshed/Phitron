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
int len(Node *&head)
{
    Node *temp = head;
    int counter = 0;
    while (temp != NULL)
    {
        temp = temp->next;
        counter++;
    }
    return counter;
}
bool check_same(Node *&head, Node *&head2)
{
    bool flag = 1;
    Node *temp1 = head;
    Node *temp2 = head2;
    while (temp1 != NULL)
    {
        if (temp1->val != temp2->val)
        {
            flag = 0;
            break;
        }
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    return flag;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    Node *head2 = NULL;
    Node *tail2 = NULL;
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
    int val2;
    while (true)
    {
        cin >> val2;
        if (val2 == -1)
        {
            break;
        }
        insert_at_tail(head2, tail2, val2);
    }
    int h1 = len(head);
    int h2 = len(head2);
    if (h1 != h2)
    {
        cout << "NO";
    }
    else if (h1 == h2)
    {
        bool check = check_same(head, head2);
        check ? cout << "YES" : cout << "NO";
    }

    return 0;
}
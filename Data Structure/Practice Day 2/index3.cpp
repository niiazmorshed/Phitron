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
void inser_at_tail(Node *&head, Node *&tail, int val)
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

void max_val(Node *&head)
{
    Node *temp = head;
    int max = 0;
    while (temp != NULL)
    {
        if (temp->val > max)
        {
            max = temp->val;
        }
        temp = temp->next;
    }
    cout << max;
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
        inser_at_tail(head, tail, val);
    }
    max_val(head);
    return 0;
}
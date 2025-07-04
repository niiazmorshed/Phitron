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
void difference(Node *&head, Node *&tail)
{
    int max = 0;
    int min = INT_MAX;
    ;
    Node *temp = head;
    if (head == tail)
    {
        cout << "0";
        return;
    }
    else
    {
        while (temp != NULL)
        {

            if (temp->val > max)
            {
                max = temp->val;
            }
            else if (temp->val < min)
            {
                min = temp->val;
            }
            temp = temp->next;
        }
    }
    cout << max - min;
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
    difference(head, tail);
    return 0;
}
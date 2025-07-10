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
int len(Node *head)
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

bool same_or_not(Node *&head1, Node *&head2)
{
    bool flag = true;
    Node *temp1 = head1;
    Node *temp2 = head2;
    while (temp1 != NULL)
    {
        if (temp1->val != temp2->val)
        {
            flag = false;
        }
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    return flag;
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
    Node *head1 = NULL;
    Node *tail1 = NULL;
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
        insert_at_tail(head1, tail1, val);
    }
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_at_tail(head2, tail2, val);
    }
    int lenA = len(head1);
    int lenB = len(head2);
    if (lenA != lenB)
    {
        cout << "NO";
    }
    else
    {
        bool flag = same_or_not(head1, head2);
        flag ? cout << "YES" : cout << "NO";
    }

    return 0;
}
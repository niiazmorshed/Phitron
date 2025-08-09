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

void delete_head(Node *&head, Node *&tail)
{

    Node *deletNode = head;
    head = head->next;
    delete deletNode;
    if (head == NULL)
    {
        tail = NULL;
        return;
    }
    head->prev = NULL;
}
void print_forward(Node *head)
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
    Node *head = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(30);
    Node *tail = new Node(40);

    head->next = b;
    b->prev = head;
    b->next = c;
    c->prev = b;
    c->next = tail;
    tail->prev = c;

    delete_head(head, tail);
    print_forward(head);
    return 0;
}

// Corner case hocceh: Jodi 1 ta node thake tahle head NULL hobe but tail ager node
// rei point kore thakbe, eta jate na hoy ejonno tail keo NULL banaite hobe;
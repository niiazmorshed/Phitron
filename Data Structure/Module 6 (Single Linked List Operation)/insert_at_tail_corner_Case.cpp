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

void insert_at_tail(Node *&head, int val)
{
    Node *newNode = new Node(val);
    if (head==NULL){
        head = newNode ;
        return ;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}
void printingLinkedList(Node *head)
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
    Node *head = NULL;

    insert_at_tail(head, 97);
    insert_at_tail(head, 98);
    printingLinkedList(head);
    return 0;
}
// Corner case: jodi Pura Linked List tai faka thake taile last e value inset kemne korbo.. Basically newNode tai head kore dibo;


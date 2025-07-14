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
int main()
{

    Node *head = NULL;
    Node *tail = NULL;
    int val;
    list<int> l;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }

        l.push_back(val);
    }
    l.sort();
    for (int i : l)
    {
        cout << i << " ";
    }
    return 0;
}
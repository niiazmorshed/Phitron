#include <bits/stdc++.h>
using namespace std;

class cmp
{
public:
    bool operator()(int left, int right)
    {
        return left > right;
    }
};

void print_Heap(priority_queue<int, vector<int>, cmp> &pq)
{
    if (pq.size() == 0)
    {
        cout << "Empty" << endl;
    }
    else
    {
        cout << pq.top() << endl;
    }
}
int main()
{
    priority_queue<int, vector<int>, cmp> pq;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        pq.push(val);
    }
    int q;
    cin >> q;
    while (q--)
    {
        int val;
        cin >> val;
        if (val == 0)
        {
            int val;
            cin >> val;
            pq.push(val);
            print_Heap(pq);
        }
        else if (val == 1)
        {
            print_Heap(pq);
        }
        else if (val == 2)
        {
            if (pq.size() != 0)
            {
                pq.pop();
            }
            print_Heap(pq);
        }
    }
    return 0;
}

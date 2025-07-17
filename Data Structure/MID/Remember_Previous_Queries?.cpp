#include <bits/stdc++.h>
using namespace std;
void print(list<int> l)
{
    list<int> temp;
    temp = l;
    temp.reverse();
    cout << "L -> ";
    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "R -> ";
    for (int i : temp)
    {
        cout << i << " ";
    }
    cout << endl;
}
int main()
{
    list<int> l;
    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int x, v;
        cin >> x >> v;
        if (x == 0)
        {
            l.push_front(v);
            print(l);
        }
        else if (x == 1)
        {
            l.push_back(v);
            print(l);
        }
        else if (x == 2)
        {
            int len = l.size();
            if (len > v)
            {
                l.erase(next(l.begin(), v));
                print(l);
            }
            else
            {
                print(l);
            }
        }
    }
    return 0;
}
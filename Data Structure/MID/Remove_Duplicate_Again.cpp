#include <bits/stdc++.h>
using namespace std;
void remove_duplicate(list<int> l)
{
    l.sort();
    l.unique();
    for (int i : l)
    {
        cout << i << " ";
    }
}
int main()
{
    list<int> l;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        l.push_back(val);
    }
    remove_duplicate(l);
    return 0;
}
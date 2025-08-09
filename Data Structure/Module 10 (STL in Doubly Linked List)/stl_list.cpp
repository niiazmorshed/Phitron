#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l(10, 5);
    cout << *l.begin() << endl;
    // for (auto itr = l.begin(); itr != l.end(); itr++)
    // {
    //     cout << *itr << endl;
    // }
    // ranged base for loop
    for (int val : l)
    {
        cout << val << endl;
    }
    return 0;
}
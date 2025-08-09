#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l = {1, 2, 3, 4, 5};
    int a[] = {1, 2, 3};
    vector<int> v = {10, 20, 30};
    // list<int> l_2(l);
    // list<int> l_2(a, a + 3);
    list<int> l_2(v.begin(), v.end());

    for (int val : l_2)
    {
        cout << val << endl;
    }
    return 0;
}
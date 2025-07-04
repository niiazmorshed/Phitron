#include <bits/stdc++.h>
using namespace std;

int main()
{
    // vector<int> v;
    // vector<int> v(5) ;
    // vector<int> v(5, -1);
    int a[5] = {1, 2, 2, 4, 5};
    vector<int> v(a, a + 5);
    // vector<int> v={1, 2, 2, 4, 5};
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
    return 0;
}
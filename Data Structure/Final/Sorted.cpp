#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        set<int> s;
        int m;
        cin >> m;
        for (int i = 0; i < m; i++)
        {
            int val;
            cin >> val;
            s.insert(val);
        }
        for (auto it = s.begin(); it != s.end(); it++)
        {
            cout << *it << " ";
        }
        cout << endl;
    }

    return 0;
}
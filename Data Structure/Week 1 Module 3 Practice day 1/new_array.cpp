#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    vector<int> c;
    for (int i = 0; i < b.size(); i++)
    {
        c.push_back(b[i]);
    }

    for (int i = 0; i < a.size(); i++)
    {
        c.push_back(a[i]);
    }
    for (int i = 0; i < c.size(); i++)
    {
        cout << c[i] << " ";
    }

    return 0;
}
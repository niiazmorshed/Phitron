#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int x;
        bool flag = false;
        cin >> x;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == x)
            {
                flag = true;
            }
        }
        if (flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
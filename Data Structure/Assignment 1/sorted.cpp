#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        int a[m];

        for (int j = 0; j < m; j++)
        {
            cin >> a[j];
        }
        int x[m];
        for (int j = 0; j < m; j++)
        {
            x[j] = a[j];
        }
        sort(a, a + m);
        bool flag = true;
        for (int j = 0; j < m; j++)
        {
            if (x[j] != a[j])
            {
                flag = false;
                break;
            }
        }
        flag ? cout << "YES" << endl : cout << "NO" << endl;
    }

    return 0;
}
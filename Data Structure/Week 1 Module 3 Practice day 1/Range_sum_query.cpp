#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < q; i++)
    {
        int l, r, sum = 0;
        cin >> l >> r;
        for (int i = l; i <= r; i++)
        {
            sum += v[i - 1];
        }
        cout << sum << endl;
    }
    return 0;
}
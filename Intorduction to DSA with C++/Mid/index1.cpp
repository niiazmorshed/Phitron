#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    int fra[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        fra[i] = a[i];
    }
    sort(a, a + n);
    sort(fra, fra + n, greater<int>());
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << "\n";
    for (int i = 0; i < n; i++)
    {
        cout << fra[i] << " ";
    }
    return 0;
}
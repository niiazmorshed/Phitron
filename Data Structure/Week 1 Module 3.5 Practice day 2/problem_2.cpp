#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<int> prefix(n);
    prefix[0] = v[0];
    for (int i = 1; i < n; i++)
    {
        prefix[i] = prefix[i - 1] + v[i];
    }
    int left, right;
    int totalPrefix = prefix[n - 1];
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            left = 0;
        }
        else
        {
            left = prefix[i - 1];
        }
        right = totalPrefix - prefix[i];
        if (left == right)
        {
            cout << i << endl;
            break ;
        }
    }
    return 0;
}
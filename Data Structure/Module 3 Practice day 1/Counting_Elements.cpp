#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < n; i++)
    {
        auto it = find(v.begin(), v.end(), v[i] + 1);
        if (it != v.end())
        {
            count += 1;
        }
    }
    cout << count << endl;

    return 0;
}
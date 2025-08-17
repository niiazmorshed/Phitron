#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;
    vector<int> adj_list[n]; // array of Vector
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
    }
    for (int i = 0; i < n; i++)
    {
        cout << i << " -> ";
        for (int i : adj_list[i])
        {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}
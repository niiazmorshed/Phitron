#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;
    vector<int> adj_list[n];
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        vector<int> v;
        int nod;
        cin >> nod;
        for (int x : adj_list[nod])
        {
             v.push_back(x);
        }
        if (v.empty())
        {
            cout << "-1" << endl;
        }
        else
        {
            sort(v.begin(), v.end(), greater<int>());
            for (int w : v)
            {
                cout << w << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
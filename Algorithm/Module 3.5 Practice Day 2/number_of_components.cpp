#include <bits/stdc++.h>
using namespace std;
vector<int> adj_List[1005];
bool visited[1005];

void dfs(int src)
{
    cout << src << " ";
    visited[src] = true;
    for (int child : adj_List[src])
    {
        if (visited[child] == false)
        {
            dfs(child);
        }
    }
}

int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj_List[a].push_back(b);
        adj_List[b].push_back(a);
    }
    memset(visited, false, sizeof(visited));
    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            dfs(i);
            cout << endl;
        }
    }
    return 0;
}
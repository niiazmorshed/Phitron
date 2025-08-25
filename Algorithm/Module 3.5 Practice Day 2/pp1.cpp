#include <bits/stdc++.h>
using namespace std;
vector<int> adj_List[1005];
bool visited[1005];
int cnt = 0;
void dfs(int src)
{
    visited[src] = true;
    cnt++;
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
    int nod;
    cin >> nod;
    dfs(nod);
    cout << cnt << endl;
    return 0;
}
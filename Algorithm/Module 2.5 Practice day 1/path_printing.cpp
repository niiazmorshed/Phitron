#include <bits/stdc++.h>
using namespace std;
vector<int> adj_list[1005];
bool visited[1005];
int parent[1005];
void bfs(int src)
{
    queue<int> q;
    q.push(src);
    visited[src] = true;
    while (!q.empty())
    {
        int prnt = q.front();
        q.pop();
        for (int child : adj_list[prnt])
        {
            if (!visited[child])
            {
                q.push(child);
                visited[child] = true;
                parent[child] = prnt;
            }
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
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
    memset(visited, false, sizeof(visited));
    memset(parent, -1, sizeof(parent));
    bfs(0);
    int src, dst;
    cin >> src >> dst;
    int node = dst;
    vector<int> path;
    while (node != -1)
    {
        path.push_back(node);
        node = parent[node];
    }
    reverse(path.begin(), path.end());
    for (int i : path)
    {
        cout << i << " ";
    }
    return 0;
}
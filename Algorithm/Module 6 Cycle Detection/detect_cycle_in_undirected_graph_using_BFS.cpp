#include <bits/stdc++.h>
using namespace std;
bool visited[105];
vector<int> adj_list[105];
int parent[105];
bool cycle;
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
            if (visited[child] && parent[prnt] != child)
            {
                cycle = true;
            }
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

    for (int i = 0; i < e; i++)
    {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
    memset(visited, false, sizeof(visited));
    memset(parent, -1, sizeof(parent));
    cycle = false;
    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            bfs(i);
        }
    }
    cycle ? cout << "Cycle Ache \n" : cout << "Cycel Nai \n";
    return 0;
}
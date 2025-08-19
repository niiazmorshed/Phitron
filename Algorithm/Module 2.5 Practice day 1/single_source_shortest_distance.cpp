#include <bits/stdc++.h>
using namespace std;
vector<int> adj_list[1005];
bool visited[1005];
int level[1005];
void bfs(int src)
{
    queue<int> q;
    q.push(src);
    visited[src] = true;
    level[src] = 0;
    while (!q.empty())
    {
        int parent = q.front();
        q.pop();
        for (int child : adj_list[parent])
        {
            if (!visited[child])
            {
                q.push(child);
                visited[child] = true;
                level[child] = level[parent] + 1;
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
    memset(level, -1, sizeof(level));
    bfs(0);
    int src, dst;
    cin >> src >> dst;
    // for (int i = 0; i < n; i++)
    // {
    //     cout << i << "->" << level[i] << endl;
    // }
    cout << level[dst] << endl;
    return 0;
}
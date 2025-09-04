#include <bits/stdc++.h>
using namespace std;
vector<pair<int, int>> adj_list[105];
int dis[105];

void dijkstra(int src)
{
    queue<pair<int, int>> q;
    q.push({src, 0});
    dis[src] = 0;
    while (!q.empty())
    {
        pair prnt = q.front();
        q.pop();
        int prnt_node = prnt.first;
        int prnt_dis = prnt.second;
        for (auto child : adj_list[prnt_node])
        {
            int child_node = child.first;
            int child_dis = child.second;
            if (prnt_dis + child_dis < dis[child_node])
            {

                dis[child_node] = prnt_dis + child_dis;
                q.push({child_node, dis[child_node]});
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
        int a, b, c;
        cin >> a >> b >> c;
        adj_list[a].push_back({b, c});
        adj_list[b].push_back({a, c});
    }
    for (int i = 0; i < n; i++)
    {
        dis[i] = INT16_MAX;
    }
    dijkstra(0);
    for (int i = 0; i < n; i++)
    {
        cout << i << "->" << dis[i] << endl;
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

class Edge
{
public:
    int a, b, c;
    Edge(int a, int b, int c)
    {
        this->a = a;
        this->b = b;
        this->c = c;
    }
};
long long int dis[1000005];
const long long INF = 1e15;
int n, e, s, q;
vector<Edge> edge_list;
void bellman_ford()
{
    for (int i = 0; i < n - 1; i++)
    {
        for (auto ed : edge_list)
        {
            int a = ed.a;
            int b = ed.b;
            int c = ed.c;
            if (dis[a] != INF && dis[a] + c < dis[b])
            {
                dis[b] = dis[a] + c;
            }
        }
    }
    bool cycle = false;
    for (auto ed : edge_list)
    {
        int a = ed.a;
        int b = ed.b;
        int c = ed.c;
        if (dis[a] != INF && dis[a] + c < dis[b])
        {
            cycle = true;
            break;
        }
    }
    if (cycle)
    {
        cout << "Negative Cycle Detected" << endl;
    }
    else
    {
        for (int i = 0; i < q; i++)
        {
            int qr;
            cin >> qr;
            if (dis[qr] == INF)
            {
                cout << "Not Possible \n";
            }
            else
            {
                cout << dis[qr] << endl;
            }
        }
    }
}
int main()
{

    cin >> n >> e;
    edge_list.clear();
    while (e--)
    {
        int a, b, w;
        cin >> a >> b >> w;
        edge_list.push_back(Edge(a, b, w));
    }
    for (int i = 1; i <= n; i++)
    {
        dis[i] = INF;
    }
    cin >> s;
    cin >> q;
    dis[s] = 0;
    bellman_ford();
    return 0;
}
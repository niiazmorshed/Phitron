#include <bits/stdc++.h>
using namespace std;
long long int adj_mat[505][505];
long long int n, e, q;
const long long INF = 1e15;
void floyd_warshal()
{
    for (int k = 1; k <= n; k++)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (adj_mat[i][k] != INF && adj_mat[k][j] != INF && adj_mat[i][k] + adj_mat[k][j] < adj_mat[i][j])
                {
                    adj_mat[i][j] = adj_mat[i][k] + adj_mat[k][j];
                }
            }
        }
    }
}
int main()
{

    cin >> n >> e;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == j)
            {
                adj_mat[i][j] = 0;
            }
            else
            {
                adj_mat[i][j] = INF;
            }
        }
    }
    while (e--)
    {
        long long int a, b, c;
        cin >> a >> b >> c;
        adj_mat[a][b] = min(adj_mat[a][b], c);
    }
    floyd_warshal();
    cin >> q;
    while (q--)
    {
        int f, s;
        cin >> f >> s;
        if (adj_mat[f][s] == INF)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << adj_mat[f][s] << endl;
        }
    }

    return 0;
}
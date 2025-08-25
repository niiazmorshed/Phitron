#include <bits/stdc++.h>
using namespace std;
char grid[105][105];
bool visited[105][105];
vector<pair<int, int>> mov = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
int r, c;
int si = -1, sj = -1, di = -1, dj = -1;
bool valid(int i, int j)
{
    if (i < 0 || i >= r || j < 0 || j >= c)
    {
        return false;
    }
    return true;
}

void bfs(int si, int sj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    visited[si][sj] = true;
    while (!q.empty())
    {
        pair<int, int> parent = q.front();
        q.pop();
        int parent_i = parent.first;
        int parent_j = parent.second;
        for (int i = 0; i < 4; i++)
        {
            int ci = parent_i + mov[i].first;
            int cj = parent_j + mov[i].second;
            if (valid(ci, cj) && !visited[ci][cj] && grid[ci][cj] != '#')
            {
                q.push({ci, cj});
                visited[ci][cj] = true;
            }
        }
    }
}

int main()
{

    cin >> r >> c;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {

            cin >> grid[i][j];
            if (grid[i][j] == 'A')
            {
                si = i;
                sj = j;
            }
            if (grid[i][j] == 'B')
            {
                di = i;
                dj = j;
            }
        }
    }
    if (si == -1 || sj == -1 || di == -1 || dj == -1)
    {
        cout << "NO" << endl;
        return 0;
    }
    memset(visited, false, sizeof(visited));
    bfs(si, sj);
    if (visited[di][dj])
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
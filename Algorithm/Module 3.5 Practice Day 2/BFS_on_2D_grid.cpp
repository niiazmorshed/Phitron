#include <bits/stdc++.h>
using namespace std;
char grid[105][105];
bool visited[105][105];
int level[105][105];
vector<pair<int, int>> mov = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
int r, c;
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
    level[si][sj] = 0;
    while (!q.empty())
    {
        pair<int, int> parent = q.front();
        q.pop();
        int parent_i = parent.first;
        int parent_j = parent.second;
        // cout << parent_i << " " << parent_j << endl;
        for (int i = 0; i < 4; i++)
        {
            int ci = parent_i + mov[i].first;
            int cj = parent_j + mov[i].second;
            if (valid(ci, cj) && !visited[ci][cj] && grid[ci][cj] == '.')
            {
                q.push({ci, cj});
                visited[ci][cj] = true;
                level[ci][cj] = level[parent_i][parent_j] + 1;
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
        }
    }
    memset(visited, false, sizeof(visited));
    memset(level, -1, sizeof(level));
    int si, sj, di, dj; // destination
    cin >> si >> sj >> di >> dj;
    bfs(si, sj);
    cout << level[di][dj] << endl;
    return 0;
}
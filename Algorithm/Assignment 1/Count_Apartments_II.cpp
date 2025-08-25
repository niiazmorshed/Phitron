#include <bits/stdc++.h>
using namespace std;
char grid[1005][1005];
bool visited[1005][1005];
vector<pair<int, int>> mov = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
int r, c;
int roomSize;

bool valid(int i, int j)
{
    if (i < 0 || i >= r || j < 0 || j >= c)
    {
        return false;
    }
    if (grid[i][j] == '#')
    {
        return false;
    }
    if (visited[i][j])
    {
        return false;
    }
    return true;
}
void dfs(int si, int sj)
{
    visited[si][sj] = true;
    roomSize++;
    for (auto child : mov)
    {
        int child_i = si + child.first;
        int child_j = sj + child.second;
        if (valid(child_i, child_j))
        {
            dfs(child_i, child_j);
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
    vector<int> v;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (grid[i][j] == '.' && !visited[i][j])
            {
                roomSize = 0;
                dfs(i, j);
                v.push_back(roomSize);
            }
        }
    }
    if (v.empty())
    {
        cout << 0 << endl;
    }
    else
    {
        sort(v.begin(), v.end());
        {
            for (int i : v)
            {
                cout << i << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
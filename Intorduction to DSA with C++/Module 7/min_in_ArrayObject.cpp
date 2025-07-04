#include <bits/stdc++.h>
using namespace std;

class SquadLevi
{
public:
    string name;
    int id;
    int kills;
};

int main()
{
    int n;
    cin >> n;
    SquadLevi a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].id >> a[i].kills;
    }
    SquadLevi minimum;
    minimum.kills = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (a[i].kills < minimum.kills)
        {
            minimum = a[i];
        }
    }
    cout << minimum.name << " " << minimum.id << " " << minimum.kills << endl;
    return 0;
}
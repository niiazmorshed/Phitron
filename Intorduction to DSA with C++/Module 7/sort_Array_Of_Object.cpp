#include <bits/stdc++.h>
using namespace std;

class SquadLevi
{
public:
    string name;
    int id;
    int kills;
};

bool comp(SquadLevi sl_left, SquadLevi sl_right)
{
    // if (sl_left.kills > sl_right.kills)
    // {
    //     return true;
    // }
    // else
    // {
    //     return false;
    // }

    return sl_left.kills < sl_right.kills;

    //   [Advance part]
    //     if (sl_left.kills == sl_right.kills)
    //     {
    //         return sl_left.id < sl_right.id;
    //     }
    //     else
    //     {
    //         return sl_left.kills > sl_right.kills;
    //     }
    //     return sl_left.kills > sl_right.kills;

    // Using Ternary Operator
    // return (sl_left.kills == sl_right.kills) ? sl_left.id < sl_right.id : sl_right.id > sl_right.id;
}
int main()
{
    int n;
    cin >> n;
    SquadLevi a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].id >> a[i].kills;
    }

    sort(a, a + n, comp);

    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].id << " " << a[i].kills << endl;
    }
    return 0;
}
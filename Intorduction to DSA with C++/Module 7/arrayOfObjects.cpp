#include <bits/stdc++.h>
using namespace std;

class SquadLevi
{
public:
    string name;
    int id;
    int totalKills;
};

int main()
{
    int n;
    cin >> n;

    SquadLevi a[n];
    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        getline(cin, a[i].name);

        cin >> a[i].id >> a[i].totalKills;
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i].name <<endl << "Id: "<< a[i].id << endl <<"Total Kills: " << a[i].totalKills << endl <<endl;
    }
    return 0;
}
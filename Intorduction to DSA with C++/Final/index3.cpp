#include <bits/stdc++.h>
using namespace std;

class SquadLevi
{
public:
    string name;
    int cls;
    char section;
    int id;
};
int main()
{
    int n;
    cin >> n;
    SquadLevi a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].cls >> a[i].section >> a[i].id;
    }
    char fra[100];

    for (int i = 0; i < n; i++)
    {
        fra[i] = a[i].section;
    }
    reverse(fra, fra + n);
    for (int i = 0; i < n; i++)
    {
        a[i].section = fra[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].cls << " " << a[i].section << " " << a[i].id << endl;
    }
    return 0;
}
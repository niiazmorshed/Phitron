#include <bits/stdc++.h>
using namespace std;

class SquadLevi
{
public:
    string name;
    int cls;
    char section;
    int id;
    int mathMarks;
    int engMarks;
    int calculation()
    {
        int totalMarks = mathMarks + engMarks;
        return totalMarks;
    }
};
bool comp(SquadLevi sl, SquadLevi sr)
{
    if (sl.calculation() == sr.calculation())
    {
        return sl.id < sr.id;
    }
    else
    {
        return sl.calculation() > sr.calculation();
    }
}
int main()
{
    int n;
    cin >> n;
    SquadLevi a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].cls >> a[i].section >> a[i].id >> a[i].mathMarks >> a[i].engMarks;
    }

    sort(a, a + n, comp);
    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].cls
             << " " << a[i].section << " " << a[i].id << " " << a[i].mathMarks << " " << a[i].engMarks << endl;
    }

    return 0;
}
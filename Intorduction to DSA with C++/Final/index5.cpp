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
};
bool comp(SquadLevi sl, SquadLevi sr)
{
    if (sl.engMarks > sr.engMarks)
        return true;
    else if (sl.engMarks < sr.engMarks)
        return false;
    else
    {
        if (sl.mathMarks > sr.mathMarks)
            return true;
        else if (sl.mathMarks < sr.mathMarks)
            return false;
        else
            return sl.id < sr.id;
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
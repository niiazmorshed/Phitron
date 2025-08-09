#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l = {10, 20, 20, 30, 30, 60, 70, 80};
    // l.remove(20);
    // l.sort(); //assending
    // l.sort(greater<int>()); //descending

    //l.unique(); //remove duplicate onlyif sorted
    l.reverse();
    for (int val : l)
    {
        cout << val << " ";
    }
    return 0;
}
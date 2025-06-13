#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[10];
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    find(a, a + 5, 3);
    
    for (int i = 0; i < 4; i++)
    {
        cout << a[i];
    }
    return 0;
}
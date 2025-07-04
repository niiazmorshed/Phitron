#include <bits/stdc++.h>
using namespace std;

int main()
{
    char a[100001];

    while (cin.getline(a, 100001))
    {
        char fra[100001];
        int len = strlen(a);
        int j = 0;
        for (int i = 0; i < len; i++)
        {
            if (a[i] != ' ')
            {
                fra[j] = a[i];
                j++;
            }
        }
        fra[j] = '\0';
        sort(fra, fra + j);
        cout << fra << endl;
    }
    return 0;
}
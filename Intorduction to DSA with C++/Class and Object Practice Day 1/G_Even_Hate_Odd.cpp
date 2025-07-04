#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int n;
        cin >> n;
        int a[n];
        int even_count = 0;
        int odd_count = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] % 2 == 0)
            {
                even_count += 1;
            }
            else
            {
                odd_count += 1;
            }
        }
        int value = 0;
        if (even_count == odd_count){
            value  = 0;
        }
        
         
    }
    return 0;
}
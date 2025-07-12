#include <bits/stdc++.h>
using namespace std;

void check(int n, int k)
{
    long long int count = 0;
    for (int i = 1; i < 10000000; i++)
    {
        if (i % n != 0)
        {
            count++;
            if (count == k)
            {
                cout << i << endl;
                break;
            }
        }
    }
} 
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        long long int n, k;
        cin >> n >> k;
        check(n, k);
    }
    return 0;
}
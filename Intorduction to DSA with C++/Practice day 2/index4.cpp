#include <bits/stdc++.h>
using namespace std;

int main()
{
    int testCase;
    cin >> testCase;
    int value;
    for (int i = 0; i < testCase; i++)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int min;
        for (int i = 1; i <= n; i++)
        {
            for (int j = i + 1; j <= n; j++)
            {
                value = a[i - 1] + a[j - 1] + (j - i);
                if (i == 1 && j == 2)
                {
                    min = value;
                }
                if (min > value)
                {
                    min = value;
                }
            }
        }
        cout << min << endl;
    }

    return 0;
}
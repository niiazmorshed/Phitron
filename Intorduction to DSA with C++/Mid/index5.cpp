#include <bits/stdc++.h>
using namespace std;

int main()
{
    int testCase, sizeA, sum;
    int flag = false;
    cin >> testCase;
    for (int i = 0; i < testCase; i++)
    {
        cin >> sizeA >> sum;
        int a[sizeA];
        for (int i = 0; i < sizeA; i++)
        {
            cin >> a[i];
        }

        if (sizeA < 3)
        {
            flag = false;
        }
        else
        {
            for (int i = 0; i < sizeA; i++)
            {
                for (int j = i + 1; j < sizeA; j++)
                {
                    for (int k = j + 1; k < sizeA; k++)
                    {
                        if (a[i] + a[j] + a[k] == sum)
                        {
                            flag = true;
                        }
                    }
                }
            }
        }
        if (flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        flag = false;
    }

    return 0;
}
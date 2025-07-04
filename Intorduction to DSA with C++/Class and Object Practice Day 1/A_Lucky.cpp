#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        int first_sum = 0;
        int last_sum = 0;
        cin >> s;
        for (int j = 0; j < 3; j++)
        {

            int value = (s[j] - 48);
            first_sum += value;
        }
        for (int j = s.size() - 1; j >= 3; j--)
        {
            int value = (s[j] - 48);
            last_sum += value;
        }
        if (first_sum == last_sum)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
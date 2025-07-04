#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int len;
        cin >> len;
        string s;
        cin >> s;
        int count = 0;
        string fra;
        for (int j = 0; j < len; j++)
        {
            int index = fra.find(s[j]);
            if (index == -1)
            {
                fra.push_back(s[j]);
                count += 2;
            }
            else
            {
                count += 1;
            }
        }
        cout << count << endl;
    }
    return 0;
}
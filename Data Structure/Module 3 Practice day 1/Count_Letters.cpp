#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    vector<int> fra(26, 0);

    for (int i = 0; i < s.size(); i++)
    {
        int value = int(s[i]) - 97;
        fra[value]++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (fra[i] > 0)
        {
            cout << char(i + 97) << " : " << fra[i] << endl;
        }
    }
    return 0;
}
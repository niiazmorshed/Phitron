#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string s;
        cin.ignore();
        getline(cin, s);
        stringstream ss(s);
        string word;
        map<string, int> mp;
        while (ss >> word)
        {
            mp[word]++;
        }
        int mx = 0;
        map<string, int> maxmp;
        for (auto it = mp.begin(); it != mp.end(); it++)
        {
            if (it->second > mx)
            {
                maxmp[it->first] = it->second;
                mx = it->second;
            }
        }
        for (auto it = maxmp.begin(); it != maxmp.end(); it++)
        {
            cout << it->first << " " << it->second << endl;
        }
    }
    return 0;
}
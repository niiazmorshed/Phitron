#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    string fra;
    int a[26] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        char low = tolower(s[i]);
        fra.push_back(low);
    }

    for (int i = 0; i < s.size(); i++)
    {

        if (fra[i] == 'e' || fra[i] == 'g' || fra[i] == 'y' || fra[i] == 'p' || fra[i] == 't')
        {
            a[fra[i] - 97]++;
        }
    }
    int e = a['e' - 97];
    int g = a['g' - 97];
    int y = a['y' - 97];
    int p = a['p' - 97];
    int t = a['t' - 97];
    int mini = min({e, g, y, p, t});
    cout << mini ;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int fra[26] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        char low = tolower(s[i]);
        if (low == 'e' || low == 'g' || low == 'y' || low == 'p' || low == 't')
        {
            fra[low - 97]++;
        }
    }
    int e_count = fra['e' - 'a'];
    int g_count = fra['g' - 'a'];
    int y_count = fra['y' - 'a'];
    int p_count = fra['p' - 'a'];
    int t_count = fra['t' - 'a'];

    int value = min({e_count, g_count, y_count, p_count, t_count});
    cout << value;

    return 0;
}
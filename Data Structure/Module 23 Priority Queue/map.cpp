#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string, int> mp;
    mp["tamim"] = 5;
    mp["samim"] = 40;
    mp["ramim"] = 52;
    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }

    // Ache naki na
    // if (mp.count("messi"))
    // {
    //     cout << "Ache" << endl;
    // }
    // else
    // {
    //     cout << "Nai" << endl;
    // }
    return 0;
}
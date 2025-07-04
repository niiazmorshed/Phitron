#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    bool flag = false ;
    getline(cin, s);
    string value = "Jessica";
    stringstream i(s);
    string word;
    while (i >> word)
    {
        if (word == value)
        {
            flag = true;
        }
    }
    if (flag)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}

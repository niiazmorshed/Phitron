#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    string str = "EGYPT";
    while (true)
    {
        int x = s.find(str);
        if (x != -1)
        {
            s.replace(x, 5, " ");
        }
        else {
            break ;
        }
    }
    cout << s;
    return 0;
}
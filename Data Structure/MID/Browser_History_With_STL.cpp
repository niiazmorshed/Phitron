#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<string> l;
    string s;
    while (true)
    {
        cin >> s;
        if (s == "end")
        {
            break;
        }
        l.push_back(s);
    }
    auto current = l.begin();
    bool validPosition = false;
    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        string instr;
        cin >> instr;
        if (instr == "visit")
        {
            string addrs;
            cin >> addrs;
            auto it = find(l.begin(), l.end(), addrs);
            if (it != l.end())
            {
                validPosition = true;
                current = it;
                cout << *current << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if (instr == "prev")
        {
            if (validPosition && current != l.begin())
            {
                current--;
                cout << *current << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if (instr == "next")
        {
            if (validPosition && current != l.end())
            {
                current++;
                if (validPosition && current != l.end())
                {
                    cout << *current << endl;
                }
                else
                {
                    cout << "Not Available" << endl;
                    current--;
                }
            }
        }
    }

    return 0;
}
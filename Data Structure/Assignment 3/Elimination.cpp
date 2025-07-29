#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        stack<char> st;
        
        for (char c : s)
        {
            if (c == '1' && !st.empty() && st.top() == '0')
            {
                st.pop();
            }
            else
            {
                st.push(c);
            }
        }
        
        if (st.empty())
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
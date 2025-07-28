#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> st;
    queue<int> q;
    int s;
    cin >> s;
    for (int i = 0; i < s; i++)
    {
        int val;
        cin >> val;
        st.push(val);
    }
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        q.push(val);
    }
    bool flag = false;
    int len = st.size();
    if (st.size() != q.size())
    {
        flag = true;
    }
    else
    {
        for (int i = 0; i < len; i++)
        {
            int val = st.top();
            int val2 = q.front();
            if (val != val2)
            {
                flag = true;
                break;
            }
            st.pop();
            q.pop();
        }
    }
    flag ? cout << "NO" : cout << "YES";
    return 0;
}
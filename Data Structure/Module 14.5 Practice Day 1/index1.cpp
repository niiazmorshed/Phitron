#include <bits/stdc++.h>
using namespace std;
class Stack
{
public:
    list<int> l;
    void push(int val)
    {
        l.push_back(val);
    }
    void pop()
    {
        l.pop_back();
    }
    int top()
    {
        return l.back();
    }
    int size()
    {
        return l.size();
    }
    bool empty()
    {
        return l.empty();
    }
};

int main()
{
    int n;
    Stack st;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        st.push(val);
    }
    int n2;
    Stack st2;
    bool flag = false;
    cin >> n2;
    for (int i = 0; i < n2; i++)
    {
        int val;
        cin >> val;
        st2.push(val);
    }
    if (st.size() != st2.size())
    {
        flag = true;
    }
    else
    {
        int len = st.size();
        for (int i = 0; i < len; i++)
        {
            if (st.top() != st2.top())
            {
                flag = true;
                break;
            }
            st.pop();
            st2.pop();
        }
    }
    flag ? cout << "NO" : cout << "YES";

    return 0;
}
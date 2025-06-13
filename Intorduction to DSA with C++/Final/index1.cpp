#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string S, X;
    int index;
    for (int i = 0; i < n; i++)
    {
        cin >> S >> X;
        int index = 0;
        while (true)
        {
            index = S.find(X, index);
            if (index == string ::npos)
            {
                break;
            }
            S.replace(index, X.length(), "#");
            index++;
        }
        cout << S << endl;
    }
    return 0;
}
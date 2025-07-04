#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string S, X;
    for (int i = 0; i < n; i++)
    {
        cin >> S >> X;
        while (true)
        {
            int index = S.find(X);
            if (index != -1)
            {
                S.replace(index, X.size(), "#");
            }
            else
            {
                break;
            }
        }
        cout << S << endl;
    }

    return 0;
}
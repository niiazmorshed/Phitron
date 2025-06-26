#include <bits/stdc++.h>
using namespace std;

int main()
{
    int row, col;
    cin >> row;
    col = row;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == j && i + j == row - 1)
            {
                cout << "x";
            }
            else if (i == j)
            {
                cout << "\\";
            }
            else if (i + j == row - 1)
            {
                cout << "/";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
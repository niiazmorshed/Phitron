// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     string s;
//     getline(cin, s);
//     stringstream i(s);
//     stringstream ii(s);
//     string word, aword;
//     int count = 0;
//     while (ii >> aword)
//     {
//         count += 1;
//     }
//     int temp = 0;
//     while (i >> word)
//     {
//         temp += 1;
//         reverse(word.begin(), word.end());
//         if (temp == count)
//         {
//             cout << word << "";
//         }
//         else
//         {
//             cout << word << " ";
//         }
//     }
//     return 0;
// }
// [Another Approach]
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    stringstream i(s);
    string word;
    i >> word;
    reverse(word.begin(), word.end());
    cout << word;
    while (i >> word)
    {
        reverse(word.begin(), word.end());
        cout <<" " << word;
    }

    return 0;
}
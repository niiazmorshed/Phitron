#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore();
    while (n--) {
        string s;
        getline(cin, s);
        stringstream ss(s);
        string word;

        map<string, int> mp;
        string maxWord;
        int mx = 0;

        while (ss >> word) {
            mp[word]++;

            if (mp[word] > mx) {
                mx = mp[word];
                maxWord = word;
            }
        }
        cout << maxWord << " " << mx << endl;
    }
    return 0;
}

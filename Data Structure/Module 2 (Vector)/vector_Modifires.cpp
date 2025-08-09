#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8};
    // vector<int> v2;
    vector<int> v3 = {500, 600, 700};
    // v2 = v; // assign hocceh

    // v2.pop_back(); //last element out hobe

    // v.insert(v.begin() + 2, 101); // Position + valur

    // insert multiple value , Let's say vector 3 insert kormu=>
    // v2.insert(v2.begin() + 3, v3.begin(), v3.end());

    // v.erase(v.begin()+2); //erease (position + value)

    // Erease Multiple value=> same as in
    // v.erase(v.begin() + 1, v.begin() + 5);
    v.erase(v.begin() + 2, v.end());
    for (int i : v) // range based forloop... index lagena
    {
        cout << i << " ";
    }
    return 0;
}
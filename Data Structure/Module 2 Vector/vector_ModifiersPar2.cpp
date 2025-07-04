#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 2, 5, 2, 7, 2};
    // joto gula 2 ache replace kore 100 korbo
    // replace(v.begin(), v.end(), 2, 100);
    replace(v.begin(), v.end() - 1, 2, 100);

    auto it = find(v.begin(), v.end(), 100); // find func
    if (it == v.end())
    {
        cout << "Painai" << endl;
    }
    else
    {
        cout << "Paisi" << endl;
    }
    // back and front
    cout << "Back=>" << v.back() << endl;
    cout << "Back=>" << v[v.size() - 1] << endl;
    cout << "Front=>" << v.front() << endl;
    cout << "Front=>" << v[0] << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    return 0;
}
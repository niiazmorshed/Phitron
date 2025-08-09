#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Assign
    list<int> l = {10, 20, 30, 40, 20, 60, 20, 80, 90};
    // list<int> thanos = {100, 200};
    // vector<int> thanos = {400, 500};
    // list<int> l2;
    // l2 = l;
    // l2.assign(l.begin(), l.end());
    
    // l.push_back(50);
    // l.push_front(5);
    // l.pop_back();

    // l.insert(next(l.begin(), 3), 35); // insert at any pos

    // l.insert(next(l.begin(), 3), thanos.begin(), thanos.end()); // insert a list at any [list]

    // l.insert(next(l.begin(), 3), thanos.begin(), thanos.end()); // insert a vector

    // cout << *next(l.begin(), 2);    //index e jay

    // l.erase(next(l.begin(), 2)); //erase single
    // l.erase(next(l.begin(), 3), next(l.begin(), 7)); // delete multiple

    replace(l.begin(), l.end(), 20, 900); // shuru theke start hobe and sesh porjonto cholbe,ki replace hobe, and replace hoye konta hobe [20 replace hoye 900 banabo]

    // auto it = find(l.begin(), l.end(), 120);
    // if (it == l.end())
    // {
    //     cout << "Painai" << endl;
    // }
    // else
    // {
    //     cout << "Paisi" << endl;
    // }

    for (int val : l)
    {
        cout << val << endl;
    }
    return 0;
}
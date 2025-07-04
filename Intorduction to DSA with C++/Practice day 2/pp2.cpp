#include <bits/stdc++.h>
using namespace std;

class Cricketer{
    public:
    int jerseyNo ;
    string country ;
};


int main()
{
    Cricketer * dhoni = new Cricketer;
    dhoni->jerseyNo = 7;
    dhoni->country = "India";



    cout << dhoni->country <<endl ;
    return 0;
}
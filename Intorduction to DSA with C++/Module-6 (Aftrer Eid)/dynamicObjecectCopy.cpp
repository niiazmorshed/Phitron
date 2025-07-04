#include <bits/stdc++.h>
using namespace std;
class Cricketer
{
public:
    string country;
    int jersey;
    Cricketer(string country, int jersey)
    {
        this->country = country;
        this->jersey = jersey;
    }
};
int main()
{
    Cricketer *dhoni = new Cricketer("India", 7);
    Cricketer *kohli = new Cricketer("India", 10);
    // kohli = dhoni;


    // kohli->country = dhoni->country;
    // kohli->jersey = dhoni->jersey ;

    *kohli = *dhoni;

    delete dhoni;
    cout << kohli->country << " " << kohli->jersey;
    return 0;
}
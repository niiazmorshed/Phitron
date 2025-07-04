#include <bits/stdc++.h>
using namespace std;
class SquadLevi
{
public:
    string name;
    int id;
    int totalKills;
    SquadLevi(string name, int id, int totalKills)
    {
        this->name = name;
        this->id = id;
        this->totalKills = totalKills;
    }
    void app()
    {
        cout << "Good Luck Soilders " << name <<id << endl;
    }
};
int main()
{
    SquadLevi eren("Eren Yeager", 2, 9);
    SquadLevi mikasa("Mikasa Ackerman", 1, 15);

    cout << eren.name << " Id: " << eren.id << " Kills Record: " << eren.totalKills << endl;
    cout << mikasa.name << " Id: " << mikasa.id << " Kills Record: " << mikasa.totalKills << endl;
    eren.app();
    mikasa.app();
    return 0;
}
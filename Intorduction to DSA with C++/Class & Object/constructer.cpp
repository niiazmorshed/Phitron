#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int rank;
    int id;
    double cgpa;

    // Constructer
    Student(int rankS, int idS, double cgpaS)
    {
        rank = rankS;
        id = idS;
        cgpa = cgpaS;
    }
};

int main()
{
    Student solder1(4, 22101783, 2.76);
    // solder1.rank = 4;
    // solder1.id = 2101783;
    // solder1.cgpa = 2.76;

    Student solder2(5, 22101777, 3.76);
    // solder2.rank = 5;
    // solder2.id = 22101777;
    // solder2.cgpa = 3.76;

    cout << "Rank: " << solder1.rank << "\n";
    cout << "ID: " << solder1.id << "\n";
    cout << "CGPA: " << solder1.cgpa << "\n";
    cout << "\n";
    cout << "Rank: " << solder2.rank << "\n";
    cout << "ID: " << solder2.id << "\n";
    cout << "CGPA: " << solder2.cgpa << "\n";
    return 0;
}
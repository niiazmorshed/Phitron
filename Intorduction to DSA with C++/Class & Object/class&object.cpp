#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    char name[100];
    int id;
    double cgpa;
};

int main()
{
    Student var1, var2;
    // char fra[100] = "Eren Yeager";
    // strcpy(var.name, fra);
    // var.id = 2101783;
    // var.cgpa = 2.76;
    cin.getline(var1.name, 100) ;
    cin >> var1.id >> var1.cgpa;
    cin.ignore();
    cin.getline(var2.name, 100) ;
    cin >> var2.id >> var2.cgpa;

    
    cout << "Name: " << var1.name << "\n";
    cout << "ID: " << var1.id << "\n";
    cout << "CGPA: " << var1.cgpa << "\n";
    cout << "\n";
    cout << "Name: " << var2.name << "\n";
    cout << "ID: " << var2.id << "\n";
    cout << "CGPA: " << var2.cgpa << "\n";
    return 0;
}
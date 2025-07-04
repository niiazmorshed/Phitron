#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    string section;
    int mathMarks;
    int clas;
    Student(string name, int roll, string section, int mathMarks, int clas)
    {
        this->name = name;
        this->roll = roll;
        this->section = section;
        this->mathMarks = mathMarks;
        this->clas = clas;
    }
};

int main()
{
    Student rakib("Rakib", 3, "A", 80, 10);
    Student sakib("Sakib", 3, "B", 85, 10);
    Student akib("Akib", 3, "C",82, 10);

    
    Student highest = rakib ;
    if (sakib.mathMarks > highest.mathMarks){
        highest = sakib;
    }
    else if (akib.mathMarks > highest.mathMarks){
        highest = akib ;
    }

    cout << "Highesr Marks Paise: " << highest.name << " " << highest.roll << " " << highest.section << endl;
    // cout << sakib.name << " " << sakib.roll << " " << sakib.section << endl;
    // cout << akib.name << " " << akib.roll << " " << akib.section << endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int marks;
    Student(string name, int roll, int marks)
    {
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }
};

class cmp
{
public:
    bool operator()(Student left, Student right)
    {
        if (left.marks != right.marks)
        {
            return left.marks < right.marks;
        }
        return left.roll > right.roll;
    }
};

void print_Heap(priority_queue<Student, vector<Student>, cmp> &pq)
{
    if (pq.size() == 0)
    {
        cout << "Empty" << endl;
    }
    else
    {
        cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
    }
}
int main()
{
    priority_queue<Student, vector<Student>, cmp> pq;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string name;
        int roll, marks;
        cin >> name >> roll >> marks;
        Student obj(name, roll, marks);
        pq.push(obj);
    }
    int q;
    cin >> q;
    while (q--)
    {
        int val;
        cin >> val;
        if (val == 0)
        {
            string name;
            int roll, marks;
            cin >> name >> roll >> marks;
            Student ob(name, roll, marks);
            pq.push(ob);
            print_Heap(pq);
        }
        else if (val == 1)
        {
            print_Heap(pq);
        }
        else if (val == 2)
        {
            if (pq.size() != 0)
            {
                pq.pop();
            }
            print_Heap(pq);
        }
    }
    return 0;
}

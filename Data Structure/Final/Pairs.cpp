#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int val;
    Student(string name, int val)
    {
        this->name = name;
        this->val = val;
    }
};

class cmp
{
public:
    bool operator()(Student left, Student right)
    {
        if (left.name != right.name)
        {
            return left.name > right.name;
        }
        return left.val < right.val;
    }
};
int main()
{
    priority_queue<Student, vector<Student>, cmp> pq;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string name;
        int val;
        cin >> name >> val;
        Student obj(name, val);
        pq.push(obj);
    }
    while (!pq.empty())
    {
        cout << pq.top().name << " " << pq.top().val << " " << endl;
        pq.pop();
    }
    return 0;
}
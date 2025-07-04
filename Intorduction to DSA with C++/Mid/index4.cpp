#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int id;
    char name[100];
    char section[5];
    int totalMarks;
};

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        Student bestSt;
        cin >> bestSt.id >> bestSt.name >> bestSt.section >> bestSt.totalMarks;

        for (int i = 0; i < 2; i++)
        {
            Student st;
            cin >> st.id >> st.name >> st.section >> st.totalMarks;

            if (st.totalMarks > bestSt.totalMarks)
            {
                bestSt = st;    
            }
            else if (st.totalMarks == bestSt.totalMarks)
            {
                if (st.id < bestSt.id)
                {
                    bestSt = st;
                }
            }
        }

        cout << bestSt.id << " " << bestSt.name << " " << bestSt.section << " " << bestSt.totalMarks << endl;
    }

    return 0;
}
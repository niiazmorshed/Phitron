#include <bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int> pq;
    pq.push(10);
    pq.push(20);
    pq.push(30);
    pq.push(40);
    pq.pop();
    cout << pq.size() << endl;
    cout << pq.top();
    
    return 0;
}
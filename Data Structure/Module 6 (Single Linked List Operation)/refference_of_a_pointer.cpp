#include <bits/stdc++.h>
using namespace std;

void fun1(int *p)
{
    int y = 50;
    p = &y;
    cout << "Inner fun function: " << &p << endl;
}

void fun2(int *&p) //ref akare disi;
{
    int y = 50;
    p = &y;
    cout << "Inner fun function: " << &p << endl;
}

void fun3(int* &p) //pointer copy hoynai... main er tai ache;
{
    *p = 105;
}

int main()
{
    int x = 20;
    int *p = &x;
    // fun1(p);
    // fun2(p);
    fun3(p);
    cout << "Main function: " << *p << endl;
    
    return 0;
}

// 1. kono fun e jodi pointer er value cahnge hoy (Not dereferrence) taile oi change main function e pawa jayna; EX: fun1

// 2. jodi amra chaai je fun theke change hole sheta main func eo change ta hok taile amader pointer ta refference akare pathaite hobe; EX: f2
// inshort: ref akare pathaile pointer change hoy na... same i thake;
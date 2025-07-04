#include <stdio.h>

long long int Fact(int n)
{
    if (n == 1)
    {
        return 1;
    }
    long long int val = Fact(n - 1);
    return val * n;
}

int main()
{
    int n;
    scanf("%d", &n);
    long long int val = Fact(n);
    printf("%lld", val);
    return 0;
}
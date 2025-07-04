#include <stdio.h>

int count_before_one(int a[], int n)
{

    int i = 0;
    int count = 0;
    while (a[i] != 1)
    {
        count++;
        i++;
    }
    return count;
}

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int val = count_before_one(a, n);
    printf("%d", val);
    return 0;
}
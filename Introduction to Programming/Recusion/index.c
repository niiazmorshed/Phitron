#include <stdio.h>

void indices(int a[], int n, int i)
{
    if (i == n)
    {
        return;
    }
    indices(a, n, i + 1);
    
    if (i % 2 == 0)
    {
        if (i == n + 1)
        {
            printf("%d", a[i]);
        }
        else
        {
            printf("%d ", a[i]);
        }
    }
    
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
    indices(a, n, 0);
}
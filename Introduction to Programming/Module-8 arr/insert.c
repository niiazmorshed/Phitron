#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int indx, val;
    scanf("%d %d", &indx, &val);
    for (int i = n; i >= indx; i--)
    {
        a[i] = a[i - 1];
    }
    a[indx] = val;

    for (int i = 0; i <= n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
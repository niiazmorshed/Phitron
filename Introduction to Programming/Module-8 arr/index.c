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
    int i = 0;
    int j = n - 1;
    for (i; i <= n / 2; i++, j--)
    {
        if (a[i] != a[j])
        {
            printf("NO");
            return 0;
        }
    }
    printf("YES");
    return 0;
}
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    for (int i = 1; i < n; i++)
    {
        int j = 1;
        for (int l = 1; l <= i; l++)
        {
            printf(" ");
        }
        for (j; j <= n - i; j++)
        {

            printf("%d", j);
        }
        j = 1;
        printf("\n");
    }

    return 0;
}

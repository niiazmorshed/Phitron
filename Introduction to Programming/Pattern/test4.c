#include <stdio.h>
int main()
{
    int n;
    int num = 65;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("%c ", j +num);
        }
        printf("\n");
    }
    return 0;
}
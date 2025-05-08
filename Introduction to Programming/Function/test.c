#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int hash1 = 1;
    int space1 = n;
    int test1, test2;
    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k < space1; k++)
        {
            printf(" ");
        }
        if (i % 2 != 0)
        {
            for (int j = 1; j <= hash1; j++)
            {
                printf("#");
                test1 = j;
            }
        }
        else
        {
            for (int j = 1; j <= hash1; j++)
            {
                printf("-");
                test2 = j;
            }
        }
        printf("\n");
        hash1 += 2;
        space1--;
    }
    int temp = 0;
    if (test1 > test2)
    {
        temp = test2;
    }
    else
    {
        temp = test1;
    }
    int hash2 = temp;
    int space2 = 1;
    for (int i = 1; i <= n - 1; i++)
    {
        if (n % 2 != 0)
        {
            for (int k = 0; k < space2; k++)
            {
                printf(" ");
            }
            if (i % 2 == 0)
            {
                for (int j = 1; j <= temp; j++)
                {
                    printf("#");
                }
            }
            else
            {
                for (int j = 1; j <= temp; j++)
                {
                    printf("-");
                }
            }
            printf("\n");
            temp -= 2;
            space2++;
        }
        else
        {
            for (int k = 0; k < space2; k++)
            {
                printf(" ");
            }
            if (i % 2 == 0)
            {
                for (int j = 1; j <= temp; j++)
                {
                    printf("-");
                }
            }
            else
            {
                for (int j = 1; j <= temp; j++)
                {
                    printf("#");
                }
            }
            printf("\n");
            temp -= 2;
            space2++;
        }
    }
    return 0;
}
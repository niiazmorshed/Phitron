#include <stdio.h>
#include <string.h>
int main()
{
    int n, m;
    scanf("%d", &n);
    scanf("%d", &m);
    int sum = 0;

    char s[1000001];
    for (int i = 0; i < n; i++)
    {
        sum += s[i] - '0';
    }
    if (sum % 3 == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}
#include <stdio.h>
void FrontEnd(int a[], int start, int end)
{
    if (start > end)
    {
        return;
    }
    if (start == end)
    {
        printf("%d", a[start]);
    }
    else
    {
        printf("%d ", a[start]);
    }
    if (start != end)
    {
        printf("%d ", a[end]);
    }

    FrontEnd(a, start + 1, end - 1);
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
    FrontEnd(a, 0, n - 1);
    return 0;
}
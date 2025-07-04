#include <stdio.h>

int my_len(char s[])
{
    int i = 0;
    int count = 0;
    while (s[i] != '\0')
    {
        count += 1;
        i++;
    }
    return count;
}
int main()
{
    char s[10];
    scanf("%9s", s);
    printf("%d", my_len(s));
    return 0;
}
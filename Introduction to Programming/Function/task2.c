#include <stdio.h>

char capital_to_small(char c)
{
    char val = c-32;
    return val ;
}
int main()
{
    char c;
    scanf("%c", &c);
    char val = capital_to_small(c);
    printf("%c", val);
    return 0;
}
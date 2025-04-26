#include <stdio.h>
#include <string.h>
char s[10000001];
int main()
{
    scanf("%s", s);
    int fra[27] = {0};
    char fre[27] = "abcdefghijklmnopqrstuvwxyz";
    int index = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        fra[s[i] - 97]++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (fra[i] > 0)
        {
            printf("%c : %d\n", fre[i], fra[i]);
        }
    }
    return 0;
}
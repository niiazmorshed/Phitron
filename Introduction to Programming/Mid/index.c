#include <stdio.h>
#include <string.h>
char s[10000001];
int main()
{
    scanf("%s", s);
    int fra[27] = {0};
    int len = strlen(s);
    char fre[27] = "abcdefghijklmnopqrstuvwxyz";
    for (int i = 0; i < len; i++)
    {
        fra[s[i] - 97]++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (fra[i] > 0)
        {
            // printf("%c : %d\n", 'a'+ i, fra[i]);
            printf("%c : %d\n", fre[i], fra[i]);

        }
    }
    return 0;
}
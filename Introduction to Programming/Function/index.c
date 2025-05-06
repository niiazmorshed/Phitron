#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main()
{
    char s[100001];
    bool flag = true;
    fgets(s, 100001, stdin);
    int len = strlen(s);

    char fra[100001];
    int fraindex = 0;
    for (int i = 0; i < len; i++)
    {
        if (s[i] >= 97 && s[i] <= 122 || s[i] >= 65 && s[i] <= 90)
        {
            int val = s[i];
            fra[fraindex] = s[i];
            fraindex++;
        }
    }
    fra[fraindex] = '\0';
    int primelen = strlen(fra);
    for (int i = 0; i < primelen; i++)
    {
        if (fra[i] >= 'A' && fra[i] <= 'Z')
        {
            fra[i] = fra[i] + 32;
        }
    }
    int j = primelen - 1;
    for (int i = 0; i < primelen / 2; i++, j--)
    {
        if (fra[i] != fra[j])
        {
            flag = false;
            break;
        }
    }
    if (flag == true)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}
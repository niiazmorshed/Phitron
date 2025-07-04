#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int my_abs(int n){
    if (n<0){
        n = n*-1;
    }
    return n;
}

int main()
{
    int n;
    scanf("%d", &n);
    int val = my_abs(n);
    printf("%d", val);
    return 0;
}

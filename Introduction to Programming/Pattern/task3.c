#include <stdio.h>

int main()
{
    int n, space=1;
    scanf("%d", &n);
    for (int i=1; i<=n; i++){
        for (int k = 1; k < space; k++){
            printf(" ");
        }
        for (int j = n; j>=i; j--){
            printf("*");
        }
        printf("\n");
        space++;
    }

    return 0;
}
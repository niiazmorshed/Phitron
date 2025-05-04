#include <stdio.h>
int main()
{
    int n, space = 1, star = 9;
    scanf("%d", &n);
    for (int i=1; i<=n; i++){
        for (int k=1; k < space; k++){
            printf(" ");
        }
        for (int j = 1; j<=star; j++){
            printf("%d", j);   
        }
        printf("\n");
        star-=2;
        space++;

    }
  return 0;
}
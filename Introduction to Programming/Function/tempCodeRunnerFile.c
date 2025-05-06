#include <stdio.h>
int main()
{
  int n;
  int star = 1;
  int space = 5;
  scanf("%d", &n);
  for (int i = 1; i <= n; i++)
  {
    for (int k = 1; k < space-1; k++)
    {
      printf(" ");
    }
    for (int j = 1; j <= star; j++)
    {
      printf("*");
    }
    printf("\n");
    star += 2;
    space--;
  }
  return 0;
}
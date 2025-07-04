#include <stdio.h>
#include <stdbool.h>
int main()
{
  int r, c;
  int flag = true;
  scanf("%d %d", &r, &c);
  int a[r][c];
  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      scanf("%d", &a[i][j]);
    }
  }
  if (r == c)
  { // squire
    for (int i = 0; i < r; i++)
    {
      for (int j = 0; j < c; j++)
      {
        if (i+j != r-1)
        {
          if (a[i][j] != 0)
          {
            flag = false;
          }
        }
      }
    }
      if (flag)
  {
    printf("Secondery Diagonal Matrix");
  }
  else
  {
    printf("Not Secondery Diagonal");
  }
  }
  else {
    printf("Not Secondery Diagonal");
  }

  return 0;
}
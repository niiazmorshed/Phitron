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
        if (i != j)
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
    printf("Primary Diagonal Matrix");
  }
  else
  {
    printf("Not Primary Diagonal");
  }
  }
  else {
    printf("Not Primary Diagonal");
  }

  return 0;
}
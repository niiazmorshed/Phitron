#include <stdio.h>
int main()
{
  int a, b, c;
  int max, min;
  scanf("%d %d %d", &a, &b, &c);
  if (a > b)
  {
    max = a;
    min = b;
    if (a > c)
    {
      max = a;
      if (b > c)
      {
        min = c;
      }
      else
      {
        min = b;
      }
      printf("%d %d", min, max);
    }
    else
    {
      max = c;
      if (a > b)
      {
        min = b;
      }
      else
      {
        min = a;
      }
      printf("%d %d", min, max);
    }
  }
  else if (b > c)
  {
    max = b;
    if (a > c)
    {
      min = c;
    }
    else
    {
      min = a;
    }
    printf("%d %d", min, max);
  }
  else
  {
    max = c;
    if (a > b)
    {
      min = b;
    }
    else
    {
      min = a;
    }
    printf("%d %d", min, max);
  }
  return 0;
}

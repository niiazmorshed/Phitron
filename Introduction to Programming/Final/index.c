#include <stdio.h>
int main()
{
  int n;
  scanf("%d", &n);
  int d, l, r;
  for (int i = 0; i < n; i++)
  {
    scanf("%d %d %d", &d, &l, &r);
    if (d > l && d < r)
    {
      printf("Take second dose now\n");
    }
    else if (d > l && d > l)
    {
      printf("Too Late\n");
    }
    if (d < l && d < r)
    {
      printf("Too early\n");
    }
    else
    {
      printf("Take Second dose now\n");
    }
  }

  return 0;
}
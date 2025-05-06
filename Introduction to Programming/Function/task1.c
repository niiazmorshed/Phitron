#include <stdio.h>

int char_to_ascii(char n)
{
  int val = n;
  return val ;
}

int main()
{
  char c;
  scanf("%c", &c);
  int val = char_to_ascii(c);
  printf("%d", val);
  return 0;
}
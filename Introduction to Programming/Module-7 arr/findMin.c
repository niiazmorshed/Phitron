#include <stdio.h>
int main()
{
  int n, min ;
  scanf("%d", &n);
  int a [n];
  for (int i = 0; i< n; i++){
    scanf("%d", &a[i]);
    if(i == 0){
      min = a[i];
    }
  }
  for (int i = 0; i< n; i++){
    if(a[i] < min){
      min = a[i];
    }
  }
  printf("Min: %d\n", min);
  return 0;

}


// Practice problem 4
// #include <stdio.h>

// int change_it(int a[], int n){
//     a[n-1] = 100;
// }

// int main()
// {
//   int n;
//   scanf("%d", &n);
//   int a[n];
//   for (int i=0; i<n; i++){
//     scanf("%d", &a[i]);
//   }
//   change_it(a,n);
//   for (int i=0; i<n; i++){
//     printf("%d ", a[i]);
//   }
//   return 0;
// }

// Practice problem 5
#include <stdio.h>
int swap_it(int *n, int *m)
{
  int temp = *n;
  *n = *m;
  *m = temp;
}
int main()
{
  int n, m;
  scanf("%d %d", &n, &m);
  int *ptr1, *ptr2;
  ptr1 = &n;
  ptr2 = &m;
  swap_it(ptr1, ptr2);
  printf("%d %d", n, m);
  return 0;
}
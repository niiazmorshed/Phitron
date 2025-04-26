// #include <stdio.h>
// int main()
// {
//   int n ;
//   scanf("%d", &n);
//   int a [n];
//   for (int i = 0; i< n; i++){
//     scanf("%d", &a[i]);
//   }
//   for (int i = 0; i< n; i++){
//     if (a[i]%2 == 0){
//       printf("%d\n", a[i]);
//     }
//   }

//   return 0;

// }

#include <stdio.h>
int main()
{
  int n, odd=0;
  scanf("%d", &n);
  int a [n];
  for (int i =0; i<n; i++){
    scanf("%d", &a[i]);
    if(a[i] %2 !=0 ){
      odd +=1;
    }
  }
  printf("Odd Value: %d\n", odd);
  return 0;
}
#include <stdio.h>

// Task-1

// int main()
// {
//     for (int i = 8; i <= 200; i += 8)
//     {
//         printf("%d\n", i);
//     }
//     return 0;
// }

// Task-2

// int main()
// {
//     for (int i = 100; i >= 1; i--)
//     {
//         if (i % 2 != 0)
//         {
//             printf("%d\n", i);
//         }
//     }
//     return 0 ;
// }

// Task-

// int main(){
//     int num ;
//     scanf("%d", &num);
//     int value = num+5;
//     if( num>=-1 && num <= 100){
//         printf("%d\n", value);
//     }else {
//         printf("Out of Range");
//     }

//     return 0;
// }

// Task

int main()
{
  int n;
  scanf("%d", &n);
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      printf("%c", (char)(65) + (i - 1));
    }
    printf("\n");
  }
}



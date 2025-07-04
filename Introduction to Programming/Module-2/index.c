// Extra Practice Problem
//  Task 1

// #include <stdio.h>
// int main()
// {
//     int num;
//     printf("Please Enter Your Number: ");
//     scanf("%d", &num);
//     if (num % 2 == 0)
//     {
//         printf("%d is an Even Number", num);
//     }
//     else
//     {
//         printf("%d is an Odd Number", num);
//     }
//     return 0;
// }


// Task-2

#include <stdio.h>
int main()
{
    int num;
    printf("Please Enter Your Number: ");
    scanf("%d", &num);
    if (num > 0){
        printf("%d is a Positive Number", num);
    }
    else if(num == 0){
        printf("%d is a Non Negative integer Value", num);
    }
    else {
        printf("%d is a Negative Number", num);
    }
}
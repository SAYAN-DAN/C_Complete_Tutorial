
#include <stdio.h>
int main()
{
    int number;
    printf("Enter the number: ");
    scanf("%d", &number);

    // if (number % 2 == 0){
    //     printf("The number is even");
    // }
    // else{
    //     printf("The number is odd");
    // }

     // USING TERNARY OPERATOR ---------------
     number % 2 == 0 ?  printf("The number is even") :  printf("The number is odd");
    return 0;
}
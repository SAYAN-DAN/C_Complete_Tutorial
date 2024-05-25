
// Take float input and print the fractional part of the real number.
#include <stdio.h>
int main(){
    float num1;
    printf("Enter a decimal number: ");      // if I take a decimal number = 5.25
    scanf("%f", &num1);
    // int num2 = (int)num1;
    int num2 = num1;             // num2 = 5, because it is an integer.
    printf("%d\n", num2);        // print num2 = 5
    float Ans = num1 - num2;     // Ans = 5.25 - 5 = 0.25
    printf("%.2f\n", Ans);
    return 0;
}


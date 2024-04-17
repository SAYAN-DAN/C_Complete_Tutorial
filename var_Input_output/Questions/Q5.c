
// Take float input and print the fractional part of the real number.
#include <stdio.h>
int main(){
    float num1;
    printf("Enter a decimal number: ");
    scanf("%f", &num1);
    // int num2 = (int)num1;
    int num2 = num1;
    printf("%d\n", num2);
    float Ans = num1 - num2;
    printf("%.2f\n", Ans);
    return 0;
}
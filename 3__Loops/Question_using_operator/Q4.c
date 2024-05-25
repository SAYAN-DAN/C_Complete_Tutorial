// WAP to print sum of all the even digits of a given number

#include <stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int sum = 0;
    int lastdigit = 0;
    while (n != 0){
        if (n % 2 != 0){
            lastdigit = n % 10;
            sum = sum + lastdigit;
        }
            n = n / 10;
    }
    printf("The sum of digit is :%d", sum);
    return 0;
}


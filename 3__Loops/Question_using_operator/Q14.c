// Write a program to print out all Armstrong numbers between 1 and 500. If sum of cubes of each digit of the number is equal to the number itself, then the number is called an Armstrong number. For example, 153 = ( 1 * 1 * 1 ) + ( 5 * 5 * 5 ) +  ( 3 * 3 * 3 )

#include<stdio.h>

int main() {
    int number, originalNumber, remainder, result = 0;

    printf("Armstrong numbers between 1 and 500 are:\n");

    for (number = 1; number <= 500; ++number) {
        originalNumber = number;
        result = 0;

        // Find the sum of cubes of each digit
        while (originalNumber != 0) {
            remainder = originalNumber % 10;
            result += remainder * remainder * remainder;
            originalNumber /= 10;
        }

        // If the result is equal to the number itself, then it's an Armstrong number
        if (result == number) {
            printf("%d\n", number);
        }
    }

    return 0;
}

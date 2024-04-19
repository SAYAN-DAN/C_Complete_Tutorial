// WAP to print the sum of given number and its reverse.

#include <stdio.h>
int main()
{
    int n, original;
    printf("Enter a number: ");
    scanf("%d", &n);
    original = n;
    int r = 0;
    while (n > 0)
    {
        r = r * 10;
        r = r + (n % 10);
        n = n / 10;
    }
    int sum = r + original;
    printf("The sum of digit is :%d", sum);
    return 0;
}

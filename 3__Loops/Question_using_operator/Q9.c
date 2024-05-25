//  Print the factorials of first ‘n’ number

#include <stdio.h>
int main()
{
    int i, n, factorial;
    printf("Enter the number: ");
    scanf("%d", &n);
    factorial = 1;
    for (i = 1; i <= n; i++)
    {
        factorial = factorial * i;
        printf("Factorial of %d : %d\n", i, factorial);
    }
    return 0;
}
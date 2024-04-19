//  Print the factorial of a given number ‘n’.

#include <stdio.h>
int main()
{
    int i, n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int product = 1;
    for (i = 1; i <= n; i++)
    {
        product = product * i;  
    }
    printf("The factorial is: %d", product);
    return 0;
}


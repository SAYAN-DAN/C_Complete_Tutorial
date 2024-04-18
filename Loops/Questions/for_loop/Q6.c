// : Print the table of ‘n’. Here ‘n’ is a integer which user will input.

#include <stdio.h>
int main()
{
    int i, n;
    printf("Enter the number: ");
    scanf("%d", &n);
    for (i = n; i <= n * 10; i = i + n){
        printf("%d ", i);
    }
    return 0;
}

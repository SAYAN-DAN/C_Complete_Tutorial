#include<stdio.h>
int main() {
    int str[40];
    // scanf("%s", str);
    // gets(str);
    scanf("%[^\n]s", str);
    printf("Your output is: %s", str);
}
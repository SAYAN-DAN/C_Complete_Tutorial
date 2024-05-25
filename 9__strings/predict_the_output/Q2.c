#include<stdio.h>
int main() {
    char str[] = {"physics Wallha"};
    str[0] = 'M';
    printf("%s ", str);
    str[1] = 97;
    for (int i = 0; str[i] != '\0'; i++)
    {
        printf("%c", str[i]);
    }
    return 0;    
}
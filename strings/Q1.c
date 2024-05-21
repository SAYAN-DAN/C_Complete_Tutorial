//Reverse a srting
#include <stdio.h>
#include <string.h>

int main() {
    char str[40];  // Correct type for storing string
    printf("Enter a string: ");
    scanf("%[^\n]", str);  // Correct format specifier
    int size = strlen(str);  // Calculate the size of the string
    // Reverse the string in place
    for (int i = 0, j = size - 1; i < j; i++, j--) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    printf("The reversed string is: %s\n", str);  // Print the reversed string
    return 0;
}



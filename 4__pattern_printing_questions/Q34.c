





#include <stdio.h>

int main() {
    int rows = 3;  // Number of rows in the pattern

    // Outer loop for rows
    for (int i = 0; i < rows; i++) {
        char ch = 'C';  // Starting character
        // Inner loop for columns
        for (int j = 0; j <= i; j++) {
            printf("%c ", ch);
            ch--;  // Decrease character by 1 (i.e., 'C' -> 'B', 'B' -> 'A', etc.)
        }
        printf("\n");  // Move to the next line after each row
    }

    return 0;
}

// If an Array arr contains n elements, then check if the given array is a palindrome or not......

#include <stdio.h>

int main() {
    int arr[7] = {1, 2, 3, 4, 3, 2, 1};
    int n = 7;  // Size of the array
    int isPalindrome = 1; // Assume the array is a palindrome
    int i, j;

    // Check if the array is a palindrome
    for (i = 0, j = n - 1; i < j; i++, j--) {
        if (arr[i] != arr[j]) {
            isPalindrome = 0; // If any pair doesn't match, it's not a palindrome
            break;
        }
    }

    // Print the result
    if (isPalindrome) {
        printf("The array is a palindrome.\n");
    } else {
        printf("The array is not a palindrome.\n");
    }

    return 0;
}

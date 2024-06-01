#include <stdio.h>
#include <stdlib.h>

void checkAge(int age) {
    if (age < 18) {
        printf("You are not old enough to vote.\n");
        exit(1);  // Exit the program with a status of 1 (indicating an error)
    }
}

int main() {
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    checkAge(age);

    printf("You are old enough to vote.\n");
    
    // If we reach here, the program will exit with a status of 0 (indicating success)
    return 0;
}

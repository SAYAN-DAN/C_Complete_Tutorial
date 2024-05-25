
//NUMBER GUESSING GAME
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    int number, guess, numberOfGuesses = 0;
    
    // Seed the random number generator
    srand(time(0));
    number = rand() % 100 + 1; // Random number between 1 and 100

    printf("Welcome to the number guessing game!\n");
    printf("I have selected a number between 1 and 100.\n");
    printf("Can you guess it?\n");

    // Loop until the user guesses the correct number
    while (1) {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        numberOfGuesses++;

        if (guess > number) {
            printf("Lower number please.\n");
        } else if (guess < number) {
            printf("Higher number please.\n");
        } else {
            printf("Congratulations! You guessed the number in %d attempts.\n", numberOfGuesses);
            break; // Exit the loop when the correct number is guessed
        }
    }

    return 0;
}

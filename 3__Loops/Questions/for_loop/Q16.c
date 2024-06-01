#include <stdio.h>
#include <unistd.h>  // For sleep() function

int main() {
    printf("Starting infinite loop. It will terminate after 5 iterations.\n");

    int counter = 0;
    for (;;) {
        printf("Loop iteration: %d\n", ++counter);
        sleep(1);  // Simulate doing some work

        // Break the loop after 5 iterations
        if (counter >= 5) {
            break;
        }
    }

    printf("Exited the loop.\n");

    return 0;
}

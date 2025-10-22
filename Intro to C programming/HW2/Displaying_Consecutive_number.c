#include <stdio.h>

/**
 * Program to prompt the user for an integer and then display
 * that value and the next 10 consecutive integers using a while loop.
 */
int main() {
    int start_value;
    // We want 11 numbers total (the start value + 10 consecutive)
    int count = 0; 

    printf("Enter an integer value: ");
    // Read the user's starting value
    if (scanf("%d", &start_value) != 1) {
        printf("Invalid input. Please enter a valid integer.\n");
        return 1;
    }

    printf("\nDisplaying the starting value and the next 10 consecutive integers:\n");

    // Loop 11 times (for count 0 through 10)
    while (count <= 10) {
        printf("%d\n", start_value);
        // Increment the value for the next iteration
        start_value++; 
        // Increment the loop counter
        count++;
    }

    return 0;
}

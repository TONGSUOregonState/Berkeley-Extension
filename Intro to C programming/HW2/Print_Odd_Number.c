#include <stdio.h>

/**
 * Program to display all odd numbers from 1 to 100.
 * The while loop starts at 1 and increments by 2 to ensure only odd numbers are printed.
 “Odd number 1 to 100"
 */
int main() {
    // Initialize the counter variable to the first odd number
    int odd_number = 1;

    printf("Odd numbers from 1 to 100:\n");

    // Loop while the odd_number is less than or equal to 100
    while (odd_number <= 100) {
        printf("%d\n", odd_number);
        // Increment by 2 to get the next odd number
        odd_number += 2;
    }

    return 0;
}

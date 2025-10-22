#include <stdio.h>

/**
 * Program to convert seconds to hours and minutes.
 * Uses a while loop to repeatedly process input until a non-positive value is entered.
 */
int main() {
    long seconds;
    int hours;
    double minutes;
    long remaining_seconds;

    printf("--- Seconds to Time Converter ---\n");

    // Use an infinite loop that breaks when the termination condition is met
    while (1) {
        printf("\nEnter the number of seconds (or 0 or less to exit): ");

        if (scanf("%ld", &seconds) != 1) {
            printf("Invalid input. Exiting program.\n");
            // Clear buffer in case of non-numeric input before exiting
            while (getchar() != '\n'); 
            break;
        }

        // Termination condition: exit loop if user enters 0 or less
        if (seconds <= 0) {
            printf("Value is zero or less. Terminating program.\n");
            break;
        }

        // Calculate whole hours using integer division
        hours = seconds / 3600;
        
        // Calculate remaining seconds after whole hours are accounted for
        remaining_seconds = seconds % 3600;

        // Convert the remaining seconds to fractional minutes
        minutes = remaining_seconds / 60.0;

        // Display results in the specified format: 10000 seconds is 2 hours and 46.67 minutes
        // %.2f ensures the minutes value is displayed with two decimal places.
        printf("%ld seconds is %d hours and %.2f minutes\n",
               seconds, hours, minutes);
    }

    return 0;
}

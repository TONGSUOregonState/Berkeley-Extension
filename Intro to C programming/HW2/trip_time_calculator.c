#include <stdio.h>

/**
 * Program to calculate trip time and display the details.
 * Time = Distance / Speed.
 */
int main() {
    char name[50];
    double distance_miles;
    double speed_mph;
    double time_hours;

    printf("Enter your name: ");
    // Read the name (up to 49 characters, to prevent buffer overflow)
    scanf("%49s", name);

    printf("Enter the trip distance in miles: ");
    if (scanf("%lf", &distance_miles) != 1 || distance_miles <= 0) {
        printf("Invalid distance entered.\n");
        return 1;
    }

    printf("Enter the speed in miles/hour: ");
    // Ensure speed is positive to avoid division by zero or negative time
    if (scanf("%lf", &speed_mph) != 1 || speed_mph <= 0) {
        printf("Invalid speed entered.\n");
        return 1;
    }

    // Calculate time: Time = Distance / Speed
    time_hours = distance_miles / speed_mph;

    // Display the result in the specified format
    // %.1f ensures one decimal place for the time, as shown in the example (2.5 hours)
    printf("\n%s, your trip of %.0f miles at %.0f mph will take %.1f hours\n",
           name, distance_miles, speed_mph, time_hours);

    return 0;
}

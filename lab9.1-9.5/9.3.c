// WAP to add two times (in hr-min-sec) by passing structure to a function.

#include <stdio.h>


// Structure to store time in hours, minutes, and seconds
struct Time {
    int hours;
    int minutes;
    int seconds;
};

// Function to add two times
struct Time addTimes(struct Time t1, struct Time t2) {
    struct Time result;
    result.seconds = t1.seconds + t2.seconds;
    result.minutes = t1.minutes + t2.minutes + result.seconds / 60; // Convert seconds to minutes if >= 60
    result.seconds %= 60; // Keep only the remainder in seconds
    result.hours = t1.hours + t2.hours + result.minutes / 60; // Convert minutes to hours if >= 60
    result.minutes %= 60; // Keep only the remainder in minutes
    return result;
}

int main() {
    struct Time t1, t2, result;

    // Input first time
    printf("Enter first time (hh mm ss): ");
    scanf("%d %d %d", &t1.hours, &t1.minutes, &t1.seconds);

    // Input second time
    printf("Enter second time (hh mm ss): ");
    scanf("%d %d %d", &t2.hours, &t2.minutes, &t2.seconds);

    // Add times
    result = addTimes(t1, t2);

    // Display result
    printf("Sum of times: %d hours %d minutes %d seconds\n", result.hours, result.minutes, result.seconds);

    return 0;
}

// Output:
// Enter first time (hh mm ss): 2 30 45
// Enter second time (hh mm ss): 1 45 50
// Sum of times: 4 hours 16 minutes 35 seconds
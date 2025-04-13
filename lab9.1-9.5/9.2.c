// WAP to add two distances (in km-meter) using structures.

#include <stdio.h>

// Structure to store distance in km and meters
struct Distance {
    int km;
    int meters;
};

// Function to add two distances
struct Distance addDistances(struct Distance d1, struct Distance d2) {
    struct Distance result;
    result.meters = d1.meters + d2.meters;
    result.km = d1.km + d2.km + result.meters / 1000; // Convert meters to km if >= 1000
    result.meters %= 1000; // Keep only the remainder in meters
    return result;
}

int main() {
    struct Distance d1, d2, result;

    // Input first distance
    printf("Enter first distance (km meters): ");
    scanf("%d %d", &d1.km, &d1.meters);

    // Input second distance
    printf("Enter second distance (km meters): ");
    scanf("%d %d", &d2.km, &d2.meters);

    // Add distances
    result = addDistances(d1, d2);

    // Display result
    printf("Sum of distances: %d km %d meters\n", result.km, result.meters);

    return 0;
}

// Output:
// Enter first distance (km meters): 2 500
// Enter second distance (km meters): 3 800

// Sum of distances: 6 km 300 meters
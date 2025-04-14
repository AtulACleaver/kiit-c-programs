// WAP to add two distances (in km-meter) using structures.

#include <stdio.h>

struct Distance { int km, meters; };

struct Distance addDistances(struct Distance d1, struct Distance d2) {
    return (struct Distance){d1.km + d2.km + (d1.meters + d2.meters) / 1000, (d1.meters + d2.meters) % 1000};
}

int main() {
    struct Distance d1, d2, result;
    printf("Enter first distance (km meters): "); scanf("%d %d", &d1.km, &d1.meters);
    printf("Enter second distance (km meters): "); scanf("%d %d", &d2.km, &d2.meters);
    result = addDistances(d1, d2);
    printf("Sum of distances: %d km %d meters\n", result.km, result.meters);
    return 0;
}

// Output:
// Enter first distance (km meters): 2 500
// Enter second distance (km meters): 3 800

// Sum of distances: 6 km 300 meters
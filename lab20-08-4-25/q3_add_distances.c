// WAP to add two distances (in inch-feet) using structures.

#include <stdio.h>

struct distance {
    int feet;
    float inch;
};

int main() {
    struct distance d[2], sum;

    // Input distances
    for (int i = 0; i < 2; i++) {
        printf("Enter distance %d:\n", i + 1);
        printf("Feet: ");
        scanf("%d", &d[i].feet);
        printf("Inch: ");
        scanf("%f", &d[i].inch);
    }

    // Calculate sum
    sum.feet = d[0].feet + d[1].feet;
    sum.inch = d[0].inch + d[1].inch;
    if (sum.inch >= 12) {
        sum.feet += (int)(sum.inch / 12);
        sum.inch = (int)sum.inch % 12;
    }
    // Print result
    printf("Sum of distances: %d feet %.2f inch\n", sum.feet, sum.inch);
    return 0;
}
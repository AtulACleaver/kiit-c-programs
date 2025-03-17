#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846

int main() {
    // Define the range for x: from -2π to 2π
    double start = -2 * PI;
    double end = 2 * PI;
    double step = 0.1; // increment in x

    // The width of the plot (number of columns)
    int width = 40; // Adjust this to make the plot wider or narrower

    // Loop through the x values
    for (double x = start; x <= end; x += step) {
        // Compute cos(x)
        double y = cos(x);
        
        // Scale and shift y to fit into our width
        // cos(x) ranges from -1 to 1. We shift by +1 to range 0 to 2,
        // then multiply by (width/2) to map it into the width.
        int pos = (int)((y + 1) * (width / 2.0));

        // Print spaces until the position, then print a star
        for (int j = 0; j < pos; j++) {
            printf(" ");
        }
        printf("*\n");
    }
    return 0;
}

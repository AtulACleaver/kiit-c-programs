// WAP to add two complex numbers by passing structure to a function
#include <stdio.h>

struct complex {
    float real;
    float imag;
};

struct complex addComplex(struct complex c1, struct complex c2) {
    struct complex result;
    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;
    return result;
}

int main() {
    struct complex c[2], sum;

    // Input complex numbers
    for (int i = 0; i < 2; i++) {
        printf("Enter complex number %d:\n", i + 1);
        printf("Real part: ");
        scanf("%f", &c[i].real);
        printf("Imaginary part: ");
        scanf("%f", &c[i].imag);
    }

    // Calculate sum
    sum = addComplex(c[0], c[1]);
    
    // Print result
    printf("Sum of complex numbers: %.2f + %.2fi\n", sum.real, sum.imag);

    return 0;
}

// Output:
// Enter complex number 1:
// Real part: 3
// Imaginary part: 4

// Enter complex number 2:
// Real part: 1
// Imaginary part: 2

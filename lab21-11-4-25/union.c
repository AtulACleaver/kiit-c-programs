#include <stdio.h>

union Data {
    int i;
    float f;
    char c;
};

int main() {
    union Data data;        // Declare a union variable
    data.i = 10;           // Assign an integer value to the union
    printf("data.i: %d\n", data.i);
    
    data.f = 220.5;        // Assign a float value to the union
    printf("data.f: %f\n", data.f);
    
    data.c = 'A';         // Assign a char value to the union
    printf("data.c: %c\n", data.c);

    printf("Enter value of int, float, char: ");
    scanf("%d %f %c", &data.i, &data.f, &data.c);
    printf("values are %d %f %c\n", data.i, data.f, data.c);
    
    return 0;
}
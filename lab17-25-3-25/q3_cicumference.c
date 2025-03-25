// WAP to calculate area and circumference of a circle using call by address function

#include <stdio.h>

void circle(float, float *, float *);

int main(){
    float r, area, circumference;

    printf("Enter the radius of the circle: ");
    scanf("%f", &r);

    circle(r, &area, &circumference);

    printf("Area of the circle = %.2f\nCircumference of the circle = %.2f", area, circumference);

    return 0;
}

void circle(float r, float *area, float *circumference){
    *area = 3.14 * r * r;
    *circumference = 2 * 3.14 * r;
}
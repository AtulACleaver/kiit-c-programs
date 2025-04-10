// Learning Pointers in C

// Swaping two numbers

/* #include <stdio.h>

void swap(int *, int *);

int main(){

    int a = 10, b = 20;

    swap(&a, &b);

    printf("Swapped value of a = %d \nSwapped value of b = %d", a, b);

    return 0;
}

void swap(int *p, int *q){
    int temp = *p;
    *p = *q;
    *q = temp;
}
 */

//  Add two numbers using call by reference

/* #include <stdio.h>

int add(int *, int *);

int main(){
    int a = 5;
    int b = 10;

    printf("%d + %d = %d", a, b, add(&a, &b));

}

int add(int *p, int *q){
    return *p + *q;
} */

// Calculate area and circumference of circle using call by reference

/* #include <stdio.h>

#define PI 3.14

void calc(float *);

int main(){
    float r;
    printf("Enter radius of circle: ");
    scanf("%f", &r);
    calc(&r);
    return 0;
}

void calc(float *r){
    float area = PI * *r * *r;
    float circum = 2 * PI * *r;

    printf("Area = %f\nCircumference = %f\n", area, circum);
} */

// Intrest and amount calculation

#include <stdio.h>

void intAmt(float *, float *, float, float, float);

int main(){
    float p = 10000, r = 10, t = 2;

    float si;
    float amt;

    intAmt(&si, &amt, p, r, t);

    printf("Amount = %f\nSI = %f", amt, si);

    return 0;
}

void intAmt(float *si, float *amt, float p, float r, float t){
    *si = (p*r*t)/100;
    *amt = *si + p;
}




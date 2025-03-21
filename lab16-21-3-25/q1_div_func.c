#include <stdio.h>

double div(double, double);

int main(){
    double a, b;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);
    printf("Division of %lf and %lf is %lf\n", a, b, div(a, b));
    return 0;
}

double div(double a, double b){
    return a/b;
}

/* 
#include <stdio.h>

double div(double a, double b){
    return a/b;
}

int main(){
    double a, b;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);
    printf("Division of %lf and %lf is %lf\n", a, b, div(a, b));
    return 0;
}
*/

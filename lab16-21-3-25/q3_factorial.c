// WAP ao find the factorial using function 

#include <stdio.h>

int factorial(int);

int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);


    printf("Factorial of %d = %d", a, factorial(a));

    return 0;
}

int factorial(int a){
    int fact = 1;

    for(int i = 2; i <= a; i++){
        fact *= i;
    }

    return fact;
}
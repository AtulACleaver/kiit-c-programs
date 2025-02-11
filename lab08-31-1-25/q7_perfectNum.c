// WAP to check whether an input integer is perfect number or not.

#include <stdio.h>
int main(){
    int num, i, sumOfFactorial = 0;
    printf("Enter the number: ");
    scanf("%d", &num);
    
    for (i = 1; i < num; i++){
        if (num % i == 0){
            sumOfFactorial += i;
        }
    }

    if (sumOfFactorial == num){
        printf("%d is a perfect number\n", num);
    } else {
        printf("%d is not a perfect number\n", num);
    }
}
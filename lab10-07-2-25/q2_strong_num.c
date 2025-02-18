// WAP to check whether an input integer is strong number or not. (Hint: If the sum of factorials of all digits of a number are equal to the number are equal to the number, it is called a strong number )

#include <stdio.h>
int main(){
    int num, n, digit, fact, sum = 0;
    printf("Input number to check for strong number: ");
    scanf("%d", &num);

    n = num;

    while(n != 0){
        digit = n%10;
        n = n/10;
        fact = 1;
        for(int i = 1; i <= digit; i++){
            fact *= i;
        }
        sum += fact;
    }
    if(num == sum){
        printf("Number is strong number");
    }else{
        printf("Number is not strong number");
    }

    return 0;
}
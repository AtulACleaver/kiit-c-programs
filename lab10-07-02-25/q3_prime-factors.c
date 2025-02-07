// WAP to find out the prime factors of a number entered through keyboard (distinct).

#include <stdio.h>
int main(){
    int num, i = 2;
    printf("Input number to find prime factors: ");
    scanf("%d", &num);

    printf("Prime factors of %d are: ", num);
    while(num != 1){
        if(num % i == 0){
            printf("%d ", i);
            num = num / i;
            while(num % i == 0){
                num = num / i;
            }
        }
        i++;
    }

    return 0;
}
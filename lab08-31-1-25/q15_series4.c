// WAP to print the series as 3 5 7 11 13 17..........n, where n is given by user using loop

#include <stdio.h>

int main(){
    int i, n, prime = 1, count = 0;
    printf("Enter the value of N: ");
    scanf("%d", &n);
    for(i = 3; count < n; i++){
        for(int j = 2; j < i; j++){
            if(i % j == 0){
                prime = 0;
                break;
            }
        }
        if(prime == 1){
            printf("%d ", i);
            count++;
        }
        prime = 1;
    }
    return 0;
}


// Output:
// Value of N: 10
// 3 5 7 11 13 17 23 29 37 47 59 71
/* 
Printing Sin Series
Variables
X - value that will go into x in sin(x) in radians
N - non - negetive integer

Series
x - x^3/3! + x^5/5! - x^7/7! + x^9/9! ... n
*/

#include <stdio.h>
#include <math.h>

int main(){
    int n;
    float x;

    printf("Give me the number of terms: ");
    scanf("%d", &n);

    printf("Value of x in sin: ");
    scanf("%f", &x);

    // Print series
    for(int i = 1; i <= n; i++){
        float fact = 1;
        for(int j = 1; j <= 2*i-1; j++){
            fact *= j;
        }
        if(i%2 == 0){
            printf(" - %f ", pow(x, 2*i-1)/fact);
        } else {
            printf(" + %f", pow(x, 2*i-1)/fact);
        }
    }

    // Print sum of series
    float sum = 0;
    for(int i = 1; i <= n; i++){
        float fact = 1;
        for(int j = 1; j <= 2*i-1; j++){
            fact *= j;
        }
        if(i%2 == 0){
            sum -= (pow(x, 2*i-1)/fact);
        } else {
            sum += (pow(x, 2*i-1)/fact);
        }
    }
    printf("\nSum of the series is: %f\n", sum);

    // Check sin value with math.h
    printf("Sin value of %.2f is: %f\n", x, sin(x));
    return 0;
}
#include <stdio.h>
#include <math.h>

int main(){
    int n = 5;
    int count = 0;
    double sum = 0;
    int fact = 1;
    int prime = 1;

    for (int i = 2; count < n; i++)
    {
        fact *= i;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                prime = 0;
                break;
            }
            
        }
        if (prime == 1)
        {
            sum += (double)fact/(double)pow(i, i);
            printf("%d!/%d^%d, ", i, i, i);
            count++;
        }

        prime = 1;
    }
    
    printf("Sum = %lf", sum);


    return 0;
}
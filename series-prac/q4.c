// Print prime & non prime series seperately wiht in a range of n
#include <stdio.h>

int main(){
    int n, i, prime = 1;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int count = 0;
    
    printf("Prime numbers: ");
    for (i = 2; count < n; i++)
    {
        prime = 1;
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
            printf("%d ", i);
            count++;
        }
    }

    count = 0;
    printf("\nNon-prime numbers: ");
    for (i = 2; count < n; i++)
    {
        prime = 1;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                prime = 0;
                break;
            }
            
        }
        if (prime == 0)
        {
            printf("%d ", i);
            count++;
        }
    }
    printf("\n");
    return 0;
    
}
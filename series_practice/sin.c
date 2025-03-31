//(x^1)/1! - (x^3)/3! + (x^5)/5! - (x^7)/7! + ..... n terms
#include <stdio.h>
#include <math.h>
int main()
{
    int n, i, j, fact;
    double x, sum = 0;

    printf("Enter the value of x:\n");
    scanf("%lf", &x);
    printf("Enter the number of terms:\n");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        fact = 1;
        for(j=1; j<=(2*i)-1; j++)
        {
            fact *= j;
        }
        if(i%2 == 0)
        {
            sum -= ((pow(x,2*i-1)) / fact);
        }
        else
        {
            sum += ((pow(x,2*i-1)) / fact);
        }
    }
    printf("Sum of the series is: %lf\n", sum);
    return 0;
}
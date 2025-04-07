#include <stdio.h>
int main()
{
    int n, fact = 1;
    double sum = 0;
    
    printf("Enter number of terms:");
    scanf("%d", &n);

    
    for(int i=1; i<=n; i++)
    {
        fact *= i;

        if(i%2 == 0)
        {
            sum -= 1/fact;
            printf("- 1/%d! ", i);
        }
        else
        {
            sum += 1/fact;
            printf("+ 1/%d! ", i);
        }
    }
    printf("\n");
    printf("Sum of series:\n");
    printf("%lf", sum);
}
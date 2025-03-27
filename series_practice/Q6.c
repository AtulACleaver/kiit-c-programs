// 1 - x^2/2! + x^4/4! - x^6/6! + x^8/8! + .... n terms
#include <stdio.h>
#include <math.h>
int main(){
    int n,i,j;
    double fact=1;
    double sum=0,x;
    printf("Enter the value of x: ");
    scanf("%lf",&x);
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=2*i;j++)
        {
            fact*=j;
        }
        if(i%2==0)
        {
            sum=-sum+(float)(pow(x,2*i)/fact);
        }
        else
        {
            sum=sum+(float)(pow(x,2*i)/fact);
        }
    }
    printf("sum=%lf",sum);
    return 0;
}
// (x^1)/1! - (x^3)/3! + (x^5)/5! - (x^7)/7! + (x^9)/9! + ..... n terms

#include <stdio.h>
#include <math.h>
int main(){
    int n,i,j;
    double x,sum=0,fact=1;
    printf("Enter the value of x: ");
    scanf("%lf",&x);
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int fact=1;
        for(j=1;j<=2*i-1;j++){
            fact*=j;
        }
        if(i%2==0)
        {
            sum -= (pow(x,2*i-1)/fact);
        }
        else{
            sum += (pow(x,2*i-1)/fact);
    }}
    printf("sum of sinseries= %lf",sum);
    return 0;
}
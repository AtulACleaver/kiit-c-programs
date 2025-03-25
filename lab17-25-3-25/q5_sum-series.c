// WAP to compute 1 + 2 + 3 + ... + n using recursion

#include <stdio.h>

int sum(int);

int main(){
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Sum = %d", sum(n));

    return 0;
}

int sum(int n){
    // Explain logic
    // sum(5) = 5 + sum(4)
    // sum(4) = 4 + sum(3)
    // sum(3) = 3 + sum(2)
    // sum(2) = 2 + sum(1)
    // sum(1) = 1

    // why doesn't it just return 1 when sum (n-1) is 1?
    // Because it is a recursive function, it will keep calling itself until the base condition is met
    // In this case, the base condition is n == 1
    // So, it will keep calling itself until n == 1
    // When n == 1, it will return 1
    if(n == 1)
        return 1;
    else
        return n + sum(n - 1);
}
// WAP to compute the cosine series using function. cos(x)=1-x2/2!+x4/4!-x6/6!+ ........


#include <stdio.h>
#include <math.h>

double factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

double cosine_series(double x, int n) {
    double sum = 0;
    for (int i = 0; i <= n; i++) {
        double term = pow(-1, i) * pow(x, 2 * i) / factorial(2 * i);
        sum += term;
    }
    return sum;
}
int main() {
    double x;
    int n;

    printf("Enter the value of x (in radians): ");
    scanf("%lf", &x);
    printf("Enter the number of terms in the series: ");
    scanf("%d", &n);

    double result = cosine_series(x, n);
    printf("cos(%lf) = %lf\n", x, result);

    return 0;
}

// Output:
// Enter the value of x (in radians): 0.5
// Enter the number of terms in the series: 10
// cos(0.500000) = 0.877582
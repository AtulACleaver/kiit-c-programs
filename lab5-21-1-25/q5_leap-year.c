// WAP to check the given year is leap year or not using conditional operator

#include <stdio.h>
int main(){
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    (year % 4 == 0 && year % 100 != 0) || year % 400 == 0 ? printf("%d is a leap year\n", year) : printf("%d is not a leap year\n", year);
    return 0;
}
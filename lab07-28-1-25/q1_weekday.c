//WAP to input a number from [0 - 6] display week day name

#include <stdio.h>
int main(){
    int n;
    printf("Enter a number from 0 to 6: ");
    scanf("%d", &n);
    switch (n){
        case 0:
            printf("Sunday\n");
            break;
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        default:
            printf("Invalid input\n");
    }
    return 0;
}

// Output:
// Enter a number from 0 to 6: 3
// Wednesday
//

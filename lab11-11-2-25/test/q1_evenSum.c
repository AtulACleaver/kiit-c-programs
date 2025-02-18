// WAP to input n elements in an array and find all even elements present in it. Also find the sum of all even elements

#include <stdio.h>
int main(){
    int n, sum = 0;

    printf("Size of array: ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    printf("Even numbers: ");    
    for (int i = 0; i<n; i++){
        if (arr[i] % 2 == 0){
            printf("%d ", arr[i]);
            sum += arr[i];
        }
    }

    printf("\nSum = %d", sum);

    return 0;
}
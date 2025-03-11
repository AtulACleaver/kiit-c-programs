// Enter n element in an array and reverse it using second array

#include <stdio.h>

int main(){
    int n;
    printf("Size of Array: ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i<n; i++){
        printf("Input %d: ", i);
        scanf("%d", &arr[i]);
    }

    int revArr[n];

    for(int i = 0; i < n; i++){
        revArr[n-i-1] = arr[i];
    }

    printf("Reversed Array: \n");
    for(int i = 0; i < n; i++){
        printf("%d, ", revArr[i]);
    }
}
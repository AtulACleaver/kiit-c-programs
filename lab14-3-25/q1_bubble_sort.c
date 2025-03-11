// WAP to bubble sort a array of elements


// Ascending Order
/* #include <stdio.h>

int main(){
    int arr[6] = {72, 12, 31, 82, 1, 8};

    for (int i = 0; i < 6; i++){
        for(int j = 0; j < 6-1-i; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("Sorted Array: \n");
    for(int i = 0; i < 6; i++){
        printf("%d, ", arr[i]);
    }

    return 0;
} */

// Decending Order

#include <stdio.h>

int main(){
    // int arr2[6] = {72, 12, 31, 82, 1, 8};

    int n;
    printf("Size of Array: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i<n; i++){
        printf("Input %d: \n", i+1);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++){
        for(int j = 0; j < n-1-i; j++){
            if(arr[j] < arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("Sorted Array: \n");
    for(int i = 0; i < 6; i++){
        printf("%d, ", arr[i]);
    }

    return 0;
}
// WAP in c to find the largest and smallest number present in a unsorted array

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

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n-1-i; j++){
            if(arr[j] < arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    printf("Largest: %d\nSmallest: %d", arr[0], arr[n-1]);

    return 0;
}

// Output
// Size of Array: 5
// Input 0: 1
// Input 1: 2
// Input 2: 3
// Input 3: 4
// Input 4: 5
// Largest: 5
// Smallest: 1
// Enter n element in an array and reverse it without using second array

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
    int i = 0;
    int j = n-1;
    
    while(i < j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;

        i++;
        j--;
    }

    printf("Reversed Array: \n");
    for(int i = 0; i < n; i++){
        printf("%d, ", arr[i]);
    }
    return 0;
}

// Output
// Size of Array: 5
// Input 0: 1
// Input 1: 2
// Input 2: 3
// Input 3: 4
// Input 4: 5
// Reversed Array:
// 5, 4, 3, 2, 1,
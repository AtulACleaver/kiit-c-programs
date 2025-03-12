// Reverse the arrary per key elements 
/* 
    Example:
    Key Element: 3
    Size of Array: 11
    Input 0: 1
    Input 1: 2
    Input 2: 3
    Input 3: 4
    Input 4: 5
    Input 5: 6
    Input 6: 7
    Input 7: 8
    Input 8: 9
    Input 9: 10
    Input 10: 11

    Reversed Array:
    3, 2, 1, 6, 5, 4, 9, 8, 7, 10, 11
*/

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

    int key;
    printf("Key Element: ");
    scanf("%d", &key);

    for(int i = 0; i < n-n%key; i+=key){
        int j = i;
        int k = i+key-1;
        while(j < k){
            int temp = arr[j];
            arr[j] = arr[k];
            arr[k] = temp;

            j++;
            k--;
        }
    }

    printf("Reversed Array: \n");
    for(int i = 0; i < n; i++){
        printf("%d, ", arr[i]);
    }
}

// Output
// Size of Array: 11
// Input 0: 1
// Input 1: 2
// Input 2: 3
// Input 3: 4
// Input 4: 5
// Input 5: 6
// Input 6: 7
// Input 7: 8
// Input 8: 9
// Input 9: 10
// Input 10: 11

// Key Element: 3
// Reversed Array:
// 3, 2, 1, 6, 5, 4, 9, 8, 7, 10, 11
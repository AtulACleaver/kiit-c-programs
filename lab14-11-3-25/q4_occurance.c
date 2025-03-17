// WAP to find the number of occurance of an elelment in an unsorted list
#include <stdio.h>

int main(){
    int n;
    int key; 

    printf("Key Element: ");
    scanf("%d", &key);

    printf("Size of Array: ");
    scanf("%d", &n);

    int count = 0;

    int arr[n];

    for (int i = 0; i<n; i++){
        printf("Input %d: \n", i);
        scanf("%d", &arr[i]);
    }
    
    printf("\nPosition of key element: ");
    for(int i = 0; i < n; i++){
        if(arr[i] == key){
            printf("%d ", i);
            count++;
        }
    }

    if (count == 0)
    {
        printf("Key Element not present.");
    }else{
        printf("Repition of key element: %d times", count);
    }

    return 0;
}

// Output
// Key Element: 3
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
//
// Position of key element: 2 Repition of key element: 1 times
//

// Search key element from an array

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
    
    printf("Position of key element: ");
    for(int i = 0; i < n; i++){
        if(arr[i] == key){
            printf("%d ", i);
            count++;
        }
    }

    if (count == 0)
    {
        printf("Key Element not present.");
    }

    return 0;
    
}
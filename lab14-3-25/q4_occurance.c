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
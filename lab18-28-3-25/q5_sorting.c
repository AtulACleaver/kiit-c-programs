// perform the sorting function to arrange the element of an array in decending order using array as an argument

#include <stdio.h>

void sortArr(int *arr, int n){
    for (int i = 0; i < n; i++)
    {
        for (int  j = 0; j < n-1-i; j++)
        {
            if(arr[j] < arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }


    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    
}

int main(){
    int arr[] = {73, 12, 18, 8, 70, 8};

    sortArr(arr, 6);

    return 0;
}
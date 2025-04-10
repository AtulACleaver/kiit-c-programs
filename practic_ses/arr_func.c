// Update element

#include <stdio.h>


void sortArr(int *, int);
void updateArr(int *, int, int, int);
void insert(int *, int, int, int);
void delete(int *, int, int);
void insertAft(int *, int, int, int);

int main(){
    
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[100];

    printf("Enter the elements of the array: \n");
    for(int i=0; i<n; i++){
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    printf("The elements of the array are: \n");
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }

    printf("\n");

    // Sorting
    /* sortArr(arr, n);
    printf("The elements of the array after sorting are: ");
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    } */

    // Updating
    /* int key = 10;
    int rep = 20;

    updateArr(arr, n, key, rep);
    printf("The updated elements of array are: \n");
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    } */
    
    // Insert
    /* int i = 2;
    int e = 8;

    insert(arr, n, i, e);
    printf("The elements of the array are: \n");
    for(int i=0; i<n+1; i++){
        printf("%d ", arr[i]);
    } */

    // Delete
    /* int i = 2;
    delete(arr, n, i);
    printf("The elements of the array are: \n");
    for(int i=0; i<n-1; i++){
        printf("%d ", arr[i]);
    } */

    // Insert after
    int i = 2;
    int e = 8;

    insertAft(arr, n, i, e);
    printf("The elements of the array are: \n");
    for(int i=0; i<n+1; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}
void sortArr(int *arr, int n){
    // simple bubble sort
    for(int i = 0; i < n; i++){
        for (int j = 0; j < n-i-1; j++)
        {
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
void updateArr(int *arr, int n, int key, int rep){
    for (int i = 0; i < n; i++)
    {
        if(arr[i] == key){
            arr[i] = rep;
        }
    }
}
void insert(int *arr, int n, int index, int newEl){
    for(int i = n-1; i >= index; i--){
        arr[i+1] = arr[i];
    }

    arr[index] = newEl;
}
void delete(int *arr, int n, int index){
    for(int i = index; i < n; i++){
        arr[i] = arr[i+1];
    }
}

void insertAft(int *arr, int n, int index, int newEl){
    for (int i = n; i > index; i++)
    {
        arr[i+1] = arr[i];
    }

    arr[index+1]= newEl;
    
}




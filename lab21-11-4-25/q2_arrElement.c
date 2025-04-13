// WAP to access and  display the elements of an array in a structure

#include <stdio.h>

struct data
{
    int arr[5];
};

int main(){
    struct data d1;

    for(int i = 0; i < 5; i++)
    {
        printf("Enter value of arr[%d]: ", i);
        scanf("%d", &d1.arr[i]);
    }

    printf("The values of the array are:\n");
    for(int i = 0; i < 5; i++)
    {
        printf("arr[%d] = %d\n", i, d1.arr[i]);
    }

    // Accessing the array using pointer
    struct data *ptr = &d1;
    printf("The values of the array using pointer are:\n");
    for(int i = 0; i < 5; i++){
        printf("arr[%d] = %d\n", i, ptr->arr[i]);
    }
    
    return 0;
}
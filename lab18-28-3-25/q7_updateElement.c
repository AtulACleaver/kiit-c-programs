// WAP to define a function & swtich the key element with another element & print the original and updated element inside main

#include <stdio.h>

void printArray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void updateElement(int *arr, int n, int key, int newElement)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            arr[i] = newElement;
            break;
        }
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};

    printf("Original Array: ");
    printArray(arr, 5);

    updateElement(arr, 5, 3, 10);
    
    printf("Updated Array: ");
    printArray(arr, 5);
    return 0;
}

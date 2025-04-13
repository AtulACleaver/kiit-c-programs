// Malloc in Dynamic Memory Allocation

#include <stdio.h>
#include <stdlib.h> // Include stdlib.h for malloc and free


int main(){
    int *ptr;
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Allocate memory using malloc
    ptr = (int *)malloc(n * sizeof(int));

    // Check if memory allocation was successful
    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Input elements
    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &ptr[i]);
    }

    // Print elements
    printf("The elements are:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", ptr[i]);
    }
    printf("\n");

    // Free allocated memory
    free(ptr);

    return 0;
}
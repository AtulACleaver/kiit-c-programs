// WAP to input colour number and print colour name

#include <stdio.h>
int main(){
    int color;
    printf("Menu \n1. Violet\n2. Indigo\n3. Blue\n4. Green\n5. Yellow\n6. Orange\n7. Red\n");
    printf("Enter the colour number: ");
    scanf("%d", &color);
    switch (color)
    {
    case 1:
    {
        printf("Violet\n");
        break;
    }
    case 2:
    {
        printf("Indigo\n");
        break;
    }
    case 3:
    {
        printf("Blue\n");
        break;
    }
    case 4:
    {
        printf("Green\n");
        break;
    }
    case 5:
    {
        printf("Yellow\n");
        break;
    }
    case 6:
    {
        printf("Orange\n");
        break;
    }
    case 7:
    {
        printf("Red\n");
        break;
    }
    default:
    {
        printf("Invalid colour number\n");
        break;
    }
    }
    return 0;
}

// Output:
// Menu
// 1. Violet
// 2. Indigo
// 3. Blue
// 4. Green
// 5. Yellow
// 6. Orange
// 7. Red
// Enter the colour number: 3
// Blue
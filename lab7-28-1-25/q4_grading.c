// WAP to display the grade system of KIIT University based on total marks secured by a student in a semester. Use switch-case statement.

#include <stdio.h>
int main(){
    int marks;
    printf("Enter the total marks secured by the student: ");
    scanf("%d", &marks);
    
    switch (marks/10)
    {
    case 10:
    {
        printf("O grade");
        break;
    }
    case 9:
    {
        printf("O grade");
        break;
    }
    case 8:
    {
        printf("E grade");
        break;
    }
    case 7:
    {
        printf("A grade");
        break;
    }
    case 6:
    {
        printf("B grade");
        break;
    }
    case 5:
    {
        printf("C grade");
        break;
    }
    case 4:
    {
        printf("D grade");
        break;
    }
    case 3:
    {
        printf("F grade");
        break;
    }
    case 2:
    {
        printf("F grade");
        break;
    }
    case 1:
    {
        printf("F grade");
        break;
    }
    case 0:
    {
        printf("F grade");
        break;
    }
    default:
        break;
    }

    return 0;
}

// Output:
// Enter the total marks secured by the student: 85
// E grade
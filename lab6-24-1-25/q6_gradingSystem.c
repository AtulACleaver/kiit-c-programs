// WAP to display the grade system of KIIT University based on total marks secured by a student in a semester. Use else..if ladder statement.

#include <stdio.h>
int main(){
    int marks;
    printf("Enter the total marks secured by the student: ");
    scanf("%d", &marks);
    if (marks >= 90){
        printf("Grade: O\n");
    } else if (marks >= 80){
        printf("Grade: E\n");
    } else if (marks >= 70){
        printf("Grade: A\n");
    } else if (marks >= 60){
        printf("Grade: B\n");
    } else if (marks >= 50){
        printf("Grade: C\n");
    } else if (marks >= 40){
        printf("Grade: D\n");
    } else {
        printf("Grade: F\n");
    }
    return 0;
}
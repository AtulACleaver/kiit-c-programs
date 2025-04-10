// WAP to create a structure student having properties of roll no, name, and mark. Input the details of two student and display it

#include <stdio.h>

struct stdid {
    int rollNo;
    char name[100];
    float mark;
};

int main(){
    struct stdid std1, std2;

    printf("Enter details of Student 1:");

    printf("\nRoll No: ");
    scanf("%d", &std1.rollNo);
    printf("Name: ");
    scanf("%s", std1.name);
    printf("Mark: ");
    scanf("%f", &std1.mark);

    printf("Enter details of Student 2:");
    printf("\nRoll No: ");
    scanf("%d", &std2.rollNo);
    printf("Name: ");
    scanf("%s", std2.name);
    printf("Mark: ");
    scanf("%f", &std2.mark);

    printf("\nDetails of Student 1:");
    printf("\nRoll No: %d", std1.rollNo);
    printf("\nName: %s", std1.name);
    printf("\nMark: %.2f", std1.mark);
    
    printf("\nDetails of Student 2:");
    printf("\nRoll No: %d", std2.rollNo);
    printf("\nName: %s", std2.name);
    printf("\nMark: %.2f", std2.mark);
    printf("\n");
    return 0; 
}
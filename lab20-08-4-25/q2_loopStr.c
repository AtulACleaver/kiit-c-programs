// WAP to create a structure student having properties of roll no, name, and mark. Input the details of two student and display it

#include <stdio.h>

struct stdid {
    int rollNo;
    char name[100];
    float mark;
};

int main(){

    int n = 3;
    struct stdid s[n];

    // Input structure
    for (int i = 0; i < n; i++)
    {
    printf("Enter details of Student %d:", i+1);

    printf("\nRoll No: ");
    scanf("%d", &s[i].rollNo);
    printf("Name: ");
    scanf("%s", s[i].name);
    printf("Mark: ");
    scanf("%f", &s[i].mark);
    }

    // Print structure
    for (int i = 0; i < n; i++)
    {
    printf("Enter details of Student %d:", i+1);

    printf("\nRoll No: %d", s[i].rollNo);
    printf("Name: %s\n", s[i].name);
    printf("Marks %f\n", s[i].mark);
    }

    return 0; 
}
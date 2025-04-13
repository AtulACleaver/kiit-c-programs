// WAP to create a student database of n students. Input the details of each student and display the details of all students. Use structures and functions.

#include <stdio.h>
#include <stdlib.h>

struct student {
    int roll;
    char name[20];
    float marks[3];
};

void input(struct student *s) {
    printf("Enter roll number: ");
    scanf("%d", &s->roll);
    printf("Enter name: ");
    scanf("%s", s->name);
    printf("Enter marks in 3 subjects: ");
    for (int i = 0; i < 3; i++) {
        scanf("%f", &s->marks[i]);
    }
}

void display(struct student s) {
    printf("Roll Number: %d\n", s.roll);
    printf("Name: %s\n", s.name);
    printf("Marks: ");
    for (int i = 0; i < 3; i++) {
        printf("%.2f ", s.marks[i]);
    }
    printf("\n");
}

int main(){
    int n;
    struct student *students;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Dynamic memory allocation for n students
    students = (struct student *)malloc(n * sizeof(struct student));
    if (students == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Input details for each student
    for (int i = 0; i < n; i++) {
        printf("Enter details for student %d:\n", i + 1);
        input(&students[i]);
    }

    // Display details of all students
    printf("\nDetails of all students:\n");
    for (int i = 0; i < n; i++) {
        display(students[i]);
    }

    // Free allocated memory
    free(students);

    return 0;
}
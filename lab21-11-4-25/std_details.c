#include <stdio.h>

struct date{
    int day;
    int month;
    int year;
};

struct student{
    int roll;
    char name[20];
    struct date dob;
    float marks[3];
};

void input(struct student *s){
    printf("Enter roll number: ");
    scanf("%d", &s->roll);
    printf("Enter name: ");
    scanf("%s", s->name);
    printf("Enter date of birth (dd mm yyyy): ");
    scanf("%d %d %d", &s->dob.day, &s->dob.month, &s->dob.year);
    printf("Enter marks in 3 subjects: ");
    for(int i = 0; i < 3; i++){
        scanf("%f", &s->marks[i]);
    }
}

void display(struct student s){
    printf("Roll Number: %d\n", s.roll);
    printf("Name: %s\n", s.name);
    printf("Date of Birth: %02d/%02d/%04d\n", s.dob.day, s.dob.month, s.dob.year);
    printf("Marks: ");
    for(int i = 0; i < 3; i++){
        printf("%.2f ", s.marks[i]);
    }
    printf("\n");
}

int main(){
    struct student s1, s2;

    printf("Enter details for student 1:\n");
    input(&s1);
    printf("Enter details for student 2:\n");
    input(&s2);

    printf("\nDetails of Student 1:\n");
    display(s1);
    printf("\nDetails of Student 2:\n");
    display(s2);

    return 0;
}


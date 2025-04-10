// WAP to input students details such as name, roll number, marks. Create call by reference function to input and diplay the details of students. Use structure and pointer.

#include <stdio.h>

struct student
{
    char name[50];
    int roll_no;
    float marks;
};

void input(struct student *);
void display(struct student);

int main(){
    struct student s[2];
    
    printf("Enter details of 2 students:\n");
    for(int i = 0; i < 2; i++){
        printf("\nStudent %d:\n", i + 1);
        input(&s[i]);
    }

    printf("\nDisplaying details of students:\n");
    for(int i = 0; i < 2; i++){
        printf("\nStudent %d:\n", i + 1);
        display(s[i]);
    }
    
    return 0;
}
void input(struct student *s){
    printf("Enter name: ");
    scanf("%s", s->name);
    printf("Enter roll number: ");
    scanf("%d", &s->roll_no);
    printf("Enter marks: ");
    scanf("%f", &s->marks);
}
void display(struct student s){
    printf("\nStudent Details:\n");
    printf("Name: %s\n", s.name);
    printf("Roll Number: %d\n", s.roll_no);
    printf("Marks: %.2f\n", s.marks);
}
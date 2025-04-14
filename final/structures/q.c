#include <stdio.h>
#include <string.h>

struct StudentInfo {
    char name[20];
    int rollNo;
    char gender[10];
    int marks[5];
    int total_score;
};

void calculateScore(struct StudentInfo *s){
    s->total_score = 0;
    for (int i = 0; i < 5 ; i++)
    {
        s->total_score += s->marks[i];
    }
}

void failedStudents(struct StudentInfo *s, int n){
    for (int i = 0; i < n; i++)
    {
        if(s->total_score < 200){
            printf("%s failed! \n", s->name);
        }
    }
}

int main(){
    struct StudentInfo s[2];

    for (int i = 0; i < 2; i++)
    {
        // taking input
        printf("Enter name: ");
        scanf("%s", s[i].name);
        printf("Enter roll number: ");
        scanf("%d", &s[i].rollNo);
        printf("Enter gender: ");
    }
    
}
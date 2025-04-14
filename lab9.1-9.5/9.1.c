/* WAP to store n student’s information (i.e. student’s roll no, name, gender, marks in 5 subjects
etc) of an educational institute and display all the data with total marks of each student, using
array of structure. If full mark of each subject is considered as 100 and pass mark as 40, then
display the list of students failed in a particular subject. */

#include <stdio.h>
#define SUBJECTS 5
#define PASS_MARK 40

struct Student {
    int rollNo, marks[SUBJECTS], totalMarks;
    char name[50], gender[10];
};

void calculateTotalMarks(struct Student *s) {
    s->totalMarks = 0;
    for (int i = 0; i < SUBJECTS; i++) s->totalMarks += s->marks[i];
}

void displayFailedStudents(struct Student students[], int n) {
    printf("\nStudents who failed:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < SUBJECTS; j++)
            if (students[i].marks[j] < PASS_MARK) {
                printf("Roll No: %d, Name: %s, Subject %d Marks: %d\n",
                       students[i].rollNo, students[i].name, j + 1, students[i].marks[j]);
                break;
            }
}

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);
    struct Student students[n];

    for (int i = 0; i < n; i++) {
        printf("\nEnter details for Student %d:\n", i + 1);
        printf("Roll No: "); scanf("%d", &students[i].rollNo);
        printf("Name: "); scanf(" %[^\n]", students[i].name);
        printf("Gender: "); scanf("%s", students[i].gender);
        printf("Marks: ");
        for (int j = 0; j < SUBJECTS; j++) scanf("%d", &students[i].marks[j]);
        calculateTotalMarks(&students[i]);
    }

    printf("\nStudent Information:\n");
    for (int i = 0; i < n; i++)
        printf("\nRoll No: %d, Name: %s, Gender: %s, Total Marks: %d\n",
               students[i].rollNo, students[i].name, students[i].gender, students[i].totalMarks);

    displayFailedStudents(students, n);
    return 0;
}

// Output:
// Enter the number of students: 2

// Enter details for Student 1:
// Roll No: 101
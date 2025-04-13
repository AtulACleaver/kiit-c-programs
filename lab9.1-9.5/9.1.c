/* WAP to store n student’s information (i.e. student’s roll no, name, gender, marks in 5 subjects
etc) of an educational institute and display all the data with total marks of each student, using
array of structure. If full mark of each subject is considered as 100 and pass mark as 40, then
display the list of students failed in a particular subject. */

#include <stdio.h>
#include <string.h>

#define SUBJECTS 5
#define PASS_MARK 40

// Structure to store student information
struct Student {
    int rollNo;
    char name[50];
    char gender[10];
    int marks[SUBJECTS];
    int totalMarks;
};

// Function to calculate total marks of a student
void calculateTotalMarks(struct Student *s) {
    s->totalMarks = 0;
    for (int i = 0; i < SUBJECTS; i++) {
        s->totalMarks += s->marks[i];
    }
}

// Function to display student information
void displayStudentInfo(struct Student s) {
    printf("\nRoll No: %d\n", s.rollNo);
    printf("Name: %s\n", s.name);
    printf("Gender: %s\n", s.gender);
    printf("Marks: ");
    for (int i = 0; i < SUBJECTS; i++) {
        printf("%d ", s.marks[i]);
    }
    printf("\nTotal Marks: %d\n", s.totalMarks);
}

// Function to display students who failed in any subject
void displayFailedStudents(struct Student students[], int n) {
    printf("\nList of students who failed in any subject:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < SUBJECTS; j++) {
            if (students[i].marks[j] < PASS_MARK) {
                printf("Roll No: %d, Name: %s, Subject %d Marks: %d\n",
                       students[i].rollNo, students[i].name, j + 1, students[i].marks[j]);
                break;
            }
        }
    }
}

int main() {
    int n;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct Student students[n];

    // Input student information
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for Student %d:\n", i + 1);
        printf("Roll No: ");
        scanf("%d", &students[i].rollNo);
        printf("Name: ");
        scanf(" %[^\n]", students[i].name); // To read a string with spaces
        printf("Gender: ");
        scanf("%s", students[i].gender);
        printf("Enter marks for %d subjects: ", SUBJECTS);
        for (int j = 0; j < SUBJECTS; j++) {
            scanf("%d", &students[i].marks[j]);
        }
        calculateTotalMarks(&students[i]);
    }

    // Display all student information
    printf("\nStudent Information:\n");
    for (int i = 0; i < n; i++) {
        displayStudentInfo(students[i]);
    }

    // Display students who failed in any subject
    displayFailedStudents(students, n);

    return 0;
}

// Output:
// Enter the number of students: 2

// Enter details for Student 1:
// Roll No: 101
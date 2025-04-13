/* WAP to store n employees data such as employee name, gender, designation, department, basic
pay etc using structures. Calculate the gross pay of each
employees as follows:
Gross pay=basic pay + HR + DA
HR=25% of basic, DA=75% of basic */

#include <stdio.h>

#include <string.h>
#define MAX_EMPLOYEES 100
#define MAX_NAME_LENGTH 50
#define MAX_DEPARTMENT_LENGTH 30
#define MAX_DESIGNATION_LENGTH 30

// Structure to store employee information
struct Employee {
    char name[MAX_NAME_LENGTH];
    char gender[10];
    char designation[MAX_DESIGNATION_LENGTH];
    char department[MAX_DEPARTMENT_LENGTH];
    float basicPay;
    float grossPay;
};

// Function to calculate gross pay
void calculateGrossPay(struct Employee *e) {
    float HR = 0.25 * e->basicPay; // HR = 25% of basic pay
    float DA = 0.75 * e->basicPay; // DA = 75% of basic pay
    e->grossPay = e->basicPay + HR + DA;
}

// Function to display employee information
void displayEmployeeInfo(struct Employee e) {
    printf("\nName: %s\n", e.name);
    printf("Gender: %s\n", e.gender);
    printf("Designation: %s\n", e.designation);
    printf("Department: %s\n", e.department);
    printf("Basic Pay: %.2f\n", e.basicPay);
    printf("Gross Pay: %.2f\n", e.grossPay);
}

int main() {
    int n;

    printf("Enter the number of employees: ");
    scanf("%d", &n);

    struct Employee employees[MAX_EMPLOYEES];

    // Input employee information
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for Employee %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", employees[i].name); // To read a string with spaces
        printf("Gender: ");
        scanf("%s", employees[i].gender);
        printf("Designation: ");
        scanf(" %[^\n]", employees[i].designation);
        printf("Department: ");
        scanf(" %[^\n]", employees[i].department);
        printf("Basic Pay: ");
        scanf("%f", &employees[i].basicPay);

        // Calculate gross pay
        calculateGrossPay(&employees[i]);
    }

    // Display all employee information
    printf("\nEmployee Information:\n");
    for (int i = 0; i < n; i++) {
        displayEmployeeInfo(employees[i]);
    }

    return 0;
}

// Output:
// Enter the number of employees: 2
// Enter details for Employee 1:

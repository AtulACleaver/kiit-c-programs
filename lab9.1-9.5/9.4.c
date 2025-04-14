/* WAP to store n employees data such as employee name, gender, designation, department, basic
pay etc using structures. Calculate the gross pay of each
employees as follows:
Gross pay=basic pay + HR + DA
HR=25% of basic, DA=75% of basic */

#include <stdio.h>

struct Employee {
    char name[50], gender[10], designation[30], department[30];
    float basicPay, grossPay;
};

int main() {
    int n;
    printf("Enter the number of employees: ");
    scanf("%d", &n);
    struct Employee employees[n];

    for (int i = 0; i < n; i++) {
        printf("\nEnter details for Employee %d:\n", i + 1);
        scanf(" %[^\n] %s %[^\n] %[^\n] %f", employees[i].name, employees[i].gender, employees[i].designation, employees[i].department, &employees[i].basicPay);
        employees[i].grossPay = employees[i].basicPay * 2; // Gross Pay = Basic Pay + 25% + 75%
    }

    printf("\nEmployee Information:\n");
    for (int i = 0; i < n; i++) {
        printf("\nName: %s\nGender: %s\nDesignation: %s\nDepartment: %s\nBasic Pay: %.2f\nGross Pay: %.2f\n",
               employees[i].name, employees[i].gender, employees[i].designation, employees[i].department, employees[i].basicPay, employees[i].grossPay);
    }

    return 0;
}

// Output:
// Enter the number of employees: 2
// Enter details for Employee 1:

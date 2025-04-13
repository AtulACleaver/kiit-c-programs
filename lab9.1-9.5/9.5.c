/* WAP to declare an union named as ABC having three members a, b and c as character, integer
and double respectively. Assign user entered values to these members respectively one by one
and display these values immediately. Again assign these user entered values to a, b, c one by
one all together and display these values at last. Find the difference. */

#include <stdio.h>
#include <string.h>

// Structure to store employee information
union ABC {
    char a[50];
    int b;
    double c;
};

// Function to display union information
void displayUnionInfo(union ABC u) {
    printf("Character: %s\n", u.a);
    printf("Integer: %d\n", u.b);
    printf("Double: %.2f\n", u.c);
}

int main() {
    union ABC u;

    // Input character
    printf("Enter a character: ");
    scanf("%s", u.a);
    displayUnionInfo(u);

    // Input integer
    printf("Enter an integer: ");
    scanf("%d", &u.b);
    displayUnionInfo(u);

    // Input double
    printf("Enter a double: ");
    scanf("%lf", &u.c);
    displayUnionInfo(u);

    return 0;
}

// output:
// Enter a character: A
// Character: A
// Integer: 0
// Double: 0.00
// Enter an integer: 5
// Character: 5
// Integer: 5
// Double: 0.00
// Enter a double: 3.14
// Character: 3.14
// Integer: 5
// Double: 3.14
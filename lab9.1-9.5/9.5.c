/* WAP to declare an union named as ABC having three members a, b and c as character, integer
and double respectively. Assign user entered values to these members respectively one by one
and display these values immediately. Again assign these user entered values to a, b, c one by
one all together and display these values at last. Find the difference. */

#include <stdio.h>

union ABC {
    char a[50];
    int b;
    double c;
};

int main() {
    union ABC u;
    
    printf("Enter a character: "); scanf("%s", u.a); printf("Character: %s\n", u.a);
    printf("Enter an integer: "); scanf("%d", &u.b); printf("Integer: %d\n", u.b);
    printf("Enter a double: "); scanf("%lf", &u.c); printf("Double: %.2f\n", u.c);

    printf("\nFinal values:\nCharacter: %s\nInteger: %d\nDouble: %.2f\n", u.a, u.b, u.c);
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
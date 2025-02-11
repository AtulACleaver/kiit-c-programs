// WAP to simulate a calculator to perform the following operations on two numbers using swtich case (addition, substraction, multiplication, division).

/*#include <stdio.h>
int main()
{
    int a, b;
    char ch;
    printf("Print two integers & the operation: ");
    scanf("%d %d %c", &a, &b, &ch);

    if (a > 0 && b > 0)
    {
        switch (ch)
        {
        case '+':
        {
            printf("Sum = %d", a + b);
            break;
        }
        case '-':
        {
            printf("Sub = %d", a - b);
            break;
        }
        case 'x':
        {
            printf("Multiply = %d", a * b);
            break;
        }
        case '/':
        {
            printf("Div = %d", a / b);
            break;
        }
        default:
        {
            printf("Not accecpted expression");
            break;
        }
        }
    }
    else
    {
        printf("Enter positive integers!");
    }

    return 0;
}*/

// using if-else

#include <stdio.h>
int main()
{
    int a, b;
    char ch;
    printf("Print two integers & the operation: ");
    scanf("%d %d %c", &a, &b, &ch);

    if (a > 0 && b > 0)
    {
        if (ch == '+')
        {
            printf("Sum = %d", a + b);
        }
        else if (ch == '-')
        {
            printf("Sub = %d", a - b);
        }
        else if (ch == 'x')
        {
            printf("Multiply = %d", a * b);
        }
        else if (ch == '/')
        {
            printf("Div = %d", a / b);
        }
        else
        {
            printf("Not accecpted expression");
        }
    }
    else
    {
        printf("Enter positive integers!");
    }

    return 0;
}
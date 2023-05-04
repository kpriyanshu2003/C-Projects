// WAP to determine the roots of a quadratic equation, ax^2 + bx + c = 0 using if-else statement
#include <stdio.h>
int main()
{
    int a, b, c, d;
    float x1, x2;
    printf("Enter the a, b, c in ax^2 + bx + c : ");
    scanf("%d %d %d", &a, &b, &c);
    d = (b * b) - (4 * a * c);
    if (a == 0)
        printf("This is not a quadratic function");
    else if (d == 0)
    {
        x1 = -b / (2 * a);
        printf("The root are equal. x1 = x2 = %f", x1);
    }
    else if (d > 0)
    {
        x1 = (-b + d) / (2 * a);
        x2 = (-b - d) / (2 * a);
        printf("The roots are real and unequal. x1 = %f and x2 = %f", x1, x2);
    }
    else if (d < 0)
        printf("The roots are imaginary");
    else
        printf("Internal Error");
    return 0;
}
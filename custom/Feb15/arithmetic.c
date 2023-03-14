// WAP to perform the arthemetic operations (+,-,*,/) of two integers and display the result

#include <stdio.h>
int main()
{
    float a, b;
    printf("Enter two numbers : ");
    scanf("%f %f", &a, &b);
    printf("Sum of %.2f and %.2f = %.2f\n", a, b, a + b);
    printf("Product of %.2f and %.2f = %.2f\n", a, b, a * b);
    printf("Subtraction of %.2f and %.2f = %.2f\n", a, b, a - b);
    printf("Divsion of %.2f and %.2f = %.2f\n", a, b, a / b);
    return 0;
}

// WAP to perform arithmetic operations on the following : a, b = user input
// c = a + b, c = a - b, c = a * b, c = a / b, c = a % b

#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter two numbers : ");
    scanf("%d %d", &a, &b);
    printf("Addition : %d\n", (a + b));
    printf("Subtraction : %d\n", (a - b));
    printf("Multiplication : %d\n", (a * b));
    printf("Division : %d\n", (a / b));
    printf("Remainder : %d\n", (a % b));
    return 0;
}
// WAP to input any two integers, and provide a menu to the user to select any of the options as add, subtract, multiply, divide and display the result accordingly
#include <stdio.h>
int main()
{
    int a, b, ch, f = 0, ans;
    printf("Enter two numbers : ");
    scanf("%d %d", &a, &b);
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Remainder");
    printf("Enter your choice (1 ~ 5) ");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
        ans = a + b;
        break;
    case 2:
        ans = a - b;
        break;
    case 3:
        ans = a * b;
        break;
    case 4:
        ans = a / b;
        break;
    case 5:
        ans = a % b;
        break;
    default:
        f = -1;
        break;
    }
    if (f == -1)
        printf("Invalid Choice");
    else
        printf("The result is %d", ans);
    return 0;
}
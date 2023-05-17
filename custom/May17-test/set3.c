// WAP to input two numbers and find factorial of their difference
#include <stdio.h>
int main()
{
    int a, b, num, f = 1;
    printf("Enter two numbers : ");
    scanf("%d %d", &a, &b);
    num = ((a - b) < 0) ? (b - a) : (a - b);
    for (int i = 1; i <= num; i++)
        f *= i;
    printf("The factorial is %d is %d", num, f);
    return 0;
}
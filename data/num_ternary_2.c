// WAP to find the largest among two numbers using ternary operator
#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter two numbers : ");
    scanf("%d %d", &a, &b);
    printf("The largest number is %d", (a > b) ? a : b);
    return 0;
}
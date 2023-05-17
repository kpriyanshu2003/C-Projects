// WAP to find factorial of a number using functions
#include <stdio.h>
int fact(int n)
{
    int f = 1;
    for (int i = 1; i <= n; i++)
        f *= i;
    return f;
}
int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    printf("Factorial of %d is %d", num, fact(num));
    return 0;
}
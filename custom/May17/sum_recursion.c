// WAP to find sum of natural numbers using recursion
#include <stdio.h>
int sum(int n)
{
    if (n == 1)
        return 1;
    else
        return (n + sum(n - 1));
}
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    printf("Sum of terms is %d", sum(n));
    return 0;
}
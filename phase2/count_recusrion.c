// WAP to count number of digits
#include <stdio.h>
int count(int n)
{
    if (n == 0)
        return 0;
    else
        return (1 + count(n / 10));
}

int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    printf("The no. of digits is %d", count(n));
    return 0;
}
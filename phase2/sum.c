// WAP to find sum of digits using function
#include <stdio.h>
int sum(int n)
{
    int d, s = 0;
    while (n != 0)
    {
        d = n % 10;
        s = s + d;
        n /= 10;
    }
    return s;
}

int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    printf("The sum of digits of %d is %d", n, sum(n));
    return 0;
}
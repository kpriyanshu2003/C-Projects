// WAP to check whether a number is prime or not
#include <stdio.h>
int main()
{
    int n, c = 0;
    printf("Enter a number : ");
    scanf("%d", &n);
    for (int i = 1; i <= n / 2; i++)
        if (n % i == 0)
            c++;
    if (c == 1)
        printf("It is a prime number ");
    else
        printf("It is not a prime number ");
    return 0;
}

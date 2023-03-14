//  WAP to check whether a number n is prime number or not
#include <stdio.h>
int main()
{
    int n, c = 0;
    printf("Enter a number : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        if (n % i == 0)
            c++;
    if (c == 2)
        printf("It is a prime number");
    else
        printf("It is not a prime number");
}
// WAP to check whether an integer number is a Armstrong number or not
#include <stdio.h>
#include <math.h>
int main()
{
    int num, n, c = 0, s = 0, d;
    printf("Enter a number : ");
    scanf("%d", &n);
    num = n;
    while (n != 0)
    {
        d = n % 10;
        n /= 10;
        c++;
    }
    n = num;
    while (n != 0)
    {
        d = n % 10;
        s = s + pow(d, c);
        n /= 10;
    }
    if (s == num)
        printf("It is an armstrong number");
    else
        printf("It is not an armstrong number");
    return 0;
}
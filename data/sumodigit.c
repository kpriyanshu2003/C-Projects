//  WAP to calculate the sum of digits of a given number
#include <stdio.h>
int main()
{
    int n, d, s = 0;
    printf("Enter the digit : ");
    scanf("%d", &n);
    while (n != 0)
    {
        d = n % 10;
        s = s + d;
        n = n / 10;
    }
    printf("The sum of the digits is %d", s);
    return 0;
}
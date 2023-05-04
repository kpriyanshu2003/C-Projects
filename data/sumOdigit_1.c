// WAP to find the sum of digits and the sum of its result until it is a single digit number
#include <stdio.h>
int main()
{
    int n, d, s = 0;
    printf("Enter a number : ");
    scanf("%d", &n);
    while (n != 0)
    {
        d = d % 10;
        s = s + d;
        n = n / 10;
    }

    while (s >= 10)
    {
        int s = 0;
        while (s != 0)
        {
            d = s % 10;
            s = s + d;
            s /= 10;
        }
    }
    printf("%d", s);
    return 0;
}
//  WAP to find the GCD/HCF and LCM of two given numbers
#include <stdio.h>
int main()
{
    int x, y, res, i;
    printf("Enter two positive integers: ");
    scanf("%d %d", &x, &y);
    res = (x > y) ? x : y;
    while (1)
    {
        if (res % x == 0 && res % y == 0)
        {
            printf("The HCF obtained from %d and %d is %d.", x, y, res);
            break;
        }
        ++res;
    }
    int min = (x < y) ? x : y;
    int hcf = 1;
    for (i = 1; i <= min; i++)
    {
        if (x % i == 0 && y % i == 0)
        {
            hcf = i;
        }
    }
    printf("\nThe LCM obtained from %d and %d is %d.", x, y, hcf);
    return 0;
}
// WAP to find the sum of digits of a number using for loop

#include <stdio.h>
int main()
{
    int n, d, s = 0;
    printf("Enter a number : ");
    scanf("%d", &n);
    for (; n != 0; n /= 10)
    {
        d = n % 10;
        s += d;
    }
    printf("The sum of digits is : %d", s);
    return 0;
}

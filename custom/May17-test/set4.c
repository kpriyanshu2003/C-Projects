// WAP to check if a number is armstrong number
#include <stdio.h>
#include <math.h>
int main()
{
    int n, num, k = 0, d;
    float s;
    printf("Enter a number : ");
    scanf("%d", &n);
    num = n;
    while (n != 0)
    {
        d = n % 10;
        k++;
        n /= 10;
    }
    n = num;
    while (n != 0)
    {
        d = n % 10;
        s = s + pow(d, k);
        n /= 10;
    }
    if (s == num)
        printf("It is an armstrong number");
    else
        printf("It is not an armstrong number");
    return 0;
}
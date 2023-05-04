// WAP to check whether an input integer is strong number or not
#include <stdio.h>
int fact(int n)
{
    if (n == 0)
        return 0;
    else
        return (n * fact(n - 1));
}
int main()
{
    int n, num, s = 0, d;
    printf("Enter a number : ");
    scanf("%d", &n);
    num = n;
    while (n != 0)
    {
        d = n % 10;
        s = s + fact(d);
        n /= 10;
    }
    if (s == num)
        printf("It is a strong number");
    else
        printf("It is not a strong number");
    return 0;
}
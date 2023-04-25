#include <stdio.h>
int main()
{
    int n, c = 0, num, d, s = 0;
    printf("Enter a hexadeciaml number : ");
    scanf("%x", &n);
    while (n != 0)
    {
        d = n % 10;
        s = s * 10 + d;
        c++;
        n /= 10;
    }
    c--;
    while (s != 0)
    {
        d = s % 10;
        num = num * 10 + d;
        s /= 10;
    }
    printf("Decimal Number is %d ", num);
    return 0;
}

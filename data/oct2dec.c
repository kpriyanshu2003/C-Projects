#include <stdio.h>
int main()
{
    int n, c, num, d;
    int s = 0, ss = 0;
    printf("Enter a oct : ");
    scanf("%o", &n);
    // printf("%o %d\n", n, n);
    num = n;
    while (n != 0) // find length of HEX
    {
        // printf("%x ", n);
        d = n % 10;
        s = s * 10 + d;
        c++;
        n /= 10;
    }
    c--;
    // printf("%d ", s);
    // Dec but reversed
    while (s != 0)
    {
        d = s % 10;
        ss = ss * 10 + d;
        s /= 10;
    }
    printf("%d ", ss); // Actual dec
    return 0;
}

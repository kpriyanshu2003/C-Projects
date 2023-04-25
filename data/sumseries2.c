// WAP to calculate sum of the following series: Sum = x*1/1! + x*2/2! + x*4/4! + x*6/6! + x*8/8! + x*10/10!

#include <stdio.h>
int fact(int n)
{
    if (n == 0)
        return 1;
    else
        return (n * fact(n - 1));
}
int main()
{
    int x, n;
    float s = 0;
    printf("Enter the value of x and n : ");
    scanf("%d %d", &x, &n);
    for (int i = 1; i <= n; i++)
        s += (x * i) / fact(i);
    printf("Sum : %f", s);
    return 0;
}
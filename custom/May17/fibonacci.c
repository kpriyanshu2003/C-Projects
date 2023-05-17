// WAP to find the nth of a fibonacci series
#include <stdio.h>
int fib(int n)
{
    if (n == 1 || n == 2)
        return n;
    else
    {
        int t1 = 1, t2 = 1, nxt;
        for (int i = 3; i <= n; i++)
        {
            nxt = t1 + t2;
            t1 = t2;
            t2 = nxt;
        }
        return nxt;
    }
}

int main()
{
    int num;
    printf("Enter the value of n : ");
    scanf("%d", &num);
    printf("The %dth term of fibonacci series is %d", num, fib(num));
    return 0;
}
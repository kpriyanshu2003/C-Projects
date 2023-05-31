// WAP to find nth term of fibonacci series
#include <stdio.h>
int fibonacciRecursive(int n)
{
    if (n <= 1)
        return n;
    else
        return fibonacciRecursive(n - 1) + fibonacciRecursive(n - 2);
}
int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("The %dth term of the Fibonacci series is: %d\n", n, fibonacciRecursive(n));
    return 0;
}

// WAP to check if an entered number is fibonacci
#include <stdio.h>
#include <math.h>

int isPerfectSquare(int n)
{
    int sqrtN = sqrt(n);
    return sqrtN * sqrtN == n;
}

int isFibonacci(int n)
{
    return isPerfectSquare(5 * n * n + 4) || isPerfectSquare(5 * n * n - 4);
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (isFibonacci(n))
        printf("It is a Fibonacci number\n");
    else
        printf("It is not a Fibonacci number\n");
    return 0;
}
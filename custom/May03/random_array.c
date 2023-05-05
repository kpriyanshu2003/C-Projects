// WAP to generate random number between 10 and 15 in an array and replace all prime number with its nearest lowest prime number and replace all composite number with their factorial

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int prime(int n)
{
    int c = 0;
    for (int i = 2; i <= n; i++)
        if (n % i == 0)
            c++;
    if (c == 1)
        return 1;
    else
        return 0;
}

int low_prime(int n)
{
    for (int i = n - 1; i > 1; i--)
    {
        if (prime(i))
            return i;
    }
    return -1;
}

int fact(int n)
{
    if (n == 1)
        return 1;
    else
        return (n * fact(n - 1));
}

int main()
{
    srand(time(0));
    int a[10], upper = 15, lower = 10, c = 0;

    printf("The array received : \n");
    for (int i = 0; i < 10; i++)
        printf("%d ", a[i] = (rand() % (upper - lower + 1)) + lower);

    printf("\nThe array after processing : \n");
    for (int i = 0; i < 10; i++)
    {
        if (prime(a[i]))
            a[i] = low_prime(a[i]);
        else
            a[i] = fact(a[i]);
        printf("%d ", a[i]);
    }
    return 0;
}
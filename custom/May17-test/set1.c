// WAP to populate an array with random numbers and display alternate prime numbers

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int n;
    srand(time(0));
    printf("Enter the lenght of array : ");
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
        a[i] = (rand() % (100 - 10)) + 10;
    printf("The Array : ");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\nThe Alternate Primes : ");
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        int d = 0;
        for (int j = 1; j <= a[i]; j++)
            if (a[i] % j == 0)
                d++;
        if (d == 2)
        {
            c++;
            if (c % 2 != 0)
                printf("%d ", a[i]);
        }
    }
    return 0;
}
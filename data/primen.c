//  WAP to generate all the prime numbers between 1 and n, where the value of n is supplied by the user

#include <stdio.h>
int main()
{
    int n, a = 0;
    printf("Enter the value of n : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
                a++;
            printf("%d\n", a);
        }
        // if (a == 2)
        printf("\t%d", n);
        printf("\t%d", i);
    }
    return 0;
}
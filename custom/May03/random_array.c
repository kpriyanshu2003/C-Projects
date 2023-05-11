// WAP to generate random number between 10 and 15 in an array and replace all prime number with its nearest lowest prime number and replace all composite number with their factorial

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int a[10], upper = 15, lower = 10, c = 0;
    printf("The array received : \n");
    for (int i = 0; i < 10; i++)
    {
        a[i] = (rand() % (upper - lower + 1)) + lower;
        printf("%d ", a[i]);
    }
    printf("\nThe array after processing : \n");
    for (int i = 0; i < 10; i++)
    {
        int n = a[i];
        int c = 0;
        for (int j = 2; j <= n; j++)
            if (n % j == 0)
                c++;
        if (c == 1)
            for (int j = n - 1; j > 1; j--)
            {
                int c2 = 0;
                for (int k = 2; k <= j; k++)
                    if (j % k == 0)
                        c2++;
                if (c2 == 1)
                {
                    a[i] = j;
                    break;
                }
            }
        else
        {
            int fact = 1;
            for (int j = 2; j <= n; j++)
                fact *= j;
            a[i] = fact;
        }
        printf("%d ", a[i]);
    }
    return 0;
}
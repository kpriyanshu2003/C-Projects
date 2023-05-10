//  WAP to input a number and display its nearest hightest prime number

#include <stdio.h>
int main()
{
    int n, a = 0;
    printf("Enter a number : ");
    scanf("%d", &n);
    if (n <= 2)
        printf("There are no lower prime numbers");
    else
    {
        for (int i = n - 1; i > 1; i--)
        {
            int c = 0;
            for (int j = 2; j <= i; j++)
                if (i % j == 0)
                    c++;
            if (c == 1)
            {
                printf("Nearest Lower Prime Number is : %d ", i);
                break;
            }
        }
    }
    return 0;
}
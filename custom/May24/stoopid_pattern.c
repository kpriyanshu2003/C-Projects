// WAP to print stoopid pattern
#include <stdio.h>
int main()
{
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        for (int j = n; j > i; j--)
            printf("  ");
        (i == 0) ? printf("") : printf("%d ", i + 1);
        for (int j = 0; j < 2 * i - 1; j++)
            printf("* ");
        printf("%d\n", i + 1);
    }
    for (int i = n - 2; i >= 0; i--)
    {
        for (int j = n; j > i; j--)
            printf("  ");
        (i == 0) ? printf("") : printf("%d ", i + 1);
        for (int j = 0; j < 2 * i - 1; j++)
            printf("* ");
        printf("%d\n", i + 1);
    }
    return 0;
}
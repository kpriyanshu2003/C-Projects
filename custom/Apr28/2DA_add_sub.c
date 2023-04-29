// WAP to perform addition / subtraction of two 2D arrays
#include <stdio.h>
int main()
{
    int a[3][3], b[3][3];

    printf("Enter %d values for 1st array : ", (3 * 3));
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            scanf("%d", &a[i][j]);

    printf("Enter %d values for 2nd array : ", (3 * 3));
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            scanf("%d", &b[i][j]);

    printf("The addition matrix : \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            printf("%d ", a[i][j] + b[i][j]);
        printf("\n");
    }

    printf("The subtraction matrix : \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            printf("%d ", a[i][j] - b[i][j]);
        printf("\n");
    }
    return 0;
}
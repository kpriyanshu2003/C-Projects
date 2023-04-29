// WAP to take input and print a 2D array
#include <stdio.h>
int main()
{
    int r, c;
    printf("Enter no. of rows and columns : ");
    scanf("%d %d", &r, &c);
    int a[r][c];
    printf("Enter %d values : ", (r * c));
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);
    printf("Your array  :\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
    return 0;
}
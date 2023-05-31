// WAP to display diagonal elements
#include <stdio.h>
int main()
{
    int a[3][3] = {{1, 2, 3},
                   {4, 5, 6},
                   {7, 8, 9}};
    printf("THE MATRIX : \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
    printf("\nTHE MAJOR DIAGONAL ELEMENTS : \n");
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (i == j)
                printf("%d ", a[i][j]);
    printf("\n\nTHE MAJOR DIAGONAL MATRIX : \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            (i == j) ? printf("%d ", a[i][j]) : printf("0 ");
        printf("\n");
    }
    printf("\nTHE MINOR DIAGONAL MATRIX : \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            (i + j == 2) ? printf("%d ", a[i][j]) : printf("0 ");
        printf("\n");
    }
    printf("\nTHE MAJOR + MINOR DIAGONAL MATRIX : \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            (i + j == 2 || i == j) ? printf("%d ", a[i][j]) : printf("0 ");
        printf("\n");
    }
    return 0;
}
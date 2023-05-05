// WAP to initialize a square matrix of user's choice with random number then rotate the side elements clockwise and anticlockwise on user choice

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int r, c, z;
    printf("Enter the row and column of array : ");
    scanf("%d %d", &r, &c);
    int a[r][c], temp[r * c];
    srand(time(0));
    printf("The array : \n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            printf("%d ", a[i][j] = temp[i + j] = (rand() % (99 - 10 + 1)) + 10);
        printf("\n");
    }
    int ch;
    printf("1. Rotate the elements clockwise\n2. Rotate the elements anti-clockwise\n");
    printf("Enter your choice : ");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
        printf("Enter the number of times to shift : ");
        scanf("%d", &z);
        // Rotate clockwwise
        for (int i = 0; i < z; i++)
        {
            for (int j = (r * c) - 1; j > 0; j--)
            {
                temp[j] = temp[j] + temp[j - 1];
                temp[j - 1] = temp[j] - temp[j - 1];
                temp[j] = temp[j] - temp[j - 1];
            }
        }
        break;
    case 2:
        // Rotate anticlockwise
        printf("\nEnter number of times to shift : ");
        scanf("%d", &z);
        for (int i = 0; i < z; i++)
        {
            for (int j = 1; j < r * c; j++)
            {
                temp[j] = temp[j] + temp[j - 1];
                temp[j - 1] = temp[j] - temp[j - 1];
                temp[j] = temp[j] - temp[j - 1];
            }
        }
        break;
    default:
        printf("Invalid Choice");
        break;
    }
    printf("The array after shifting : \n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            printf("%d ", a[i][j] = temp[i + j]);
        printf("\n");
    }
    return 0;
}
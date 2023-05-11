// WAP to initialize a square matrix of user's choice with random number then rotate the side elements clockwise and anticlockwise on user choice
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int n, ch, m, temp;
    srand(time(0));
    printf("Enter the size of square matrix : ");
    scanf("%d", &n);
    int a[n][n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            a[i][j] = rand() % 90 + 9;
    printf("The array : \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%d  ", a[i][j]);
        printf("\n");
    }
    printf("1. Clockwise Shifting\n2. Anticlockwise Shift\nEnter your choice : ");
    scanf("%d", &ch);
    m = a[0][0];
    switch (ch)
    {
    case 1:
        // Clockwise Shift
        for (int i = 0; i < n / 2; i++)
        {
            for (int j = i; j < n - i - 1; j++)
            {
                temp = a[i][j];
                a[i][j] = a[n - j - 1][i];
                a[n - j - 1][i] = a[n - i - 1][n - j - 1];
                a[n - i - 1][n - j - 1] = a[j][n - i - 1];
                a[j][n - i - 1] = temp;
            }
        }
        a[1][0] = m;
        break;
    case 2:
        // Anticlockwise Shift
        for (int i = 0; i < n / 2; i++)
        {
            for (int j = i; j < n - i - 1; j++)
            {
                temp = a[i][j];
                a[i][j] = a[j][n - i - 1];
                a[j][n - i - 1] = a[n - i - 1][n - j - 1];
                a[n - i - 1][n - j - 1] = a[n - j - 1][i];
                a[n - j - 1][i] = temp;
            }
        }
        a[0][1] = m;
        break;
    default:
        printf("Invalid Choice\n");
        break;
    }
    printf("The shifted array : \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%d  ", a[i][j]);
        printf("\n");
    }
    return 0;
}
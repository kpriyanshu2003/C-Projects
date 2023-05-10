// WAP to find smallest element in each row
#include <stdio.h>
int main()
{
    int a[3][3] = {{1, 2, 3},
                   {4, 5, 6},
                   {7, 8, 9}},
        max;
    for (int i = 0; i < 3; i++)
    {
        max = a[i][0];
        for (int j = 0; j < 3; j++)
            max = (a[i][j] < max) ? a[i][j] : max;
        printf("The smallest element in row %d is %d\n", i + 1, max);
    }
    return 0;
}
// WAP to find largest element in the matrix
#include <stdio.h>
int main()
{
    int a[3][3] = {{1, 2, 3},
                   {4, 5, 6},
                   {7, 8, 9}},
        max = -1;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            max = (a[i][j] > max) ? a[i][j] : max;
    printf("The largest element : %d", max);
    return 0;
}
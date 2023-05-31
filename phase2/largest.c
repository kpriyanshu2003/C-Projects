// WAP to find largest element in the matrix
#include <stdio.h>
int main()
{
    int a[3][3], max = -1;
    printf("Enter %d values : ", (3 * 3));
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
            max = (a[i][j] > max) ? a[i][j] : max;
        }
    printf("The largest element : %d", max);
    return 0;
}
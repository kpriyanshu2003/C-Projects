// WAP to find largest element in each column
#include <stdio.h>
int main()
{
    int a[3][3] = {{1, 2, 3},
                   {4, 5, 6},
                   {7, 8, 9}},
        max;
    for (int i = 0; i < 3; i++)
    {
        max = -1;
        for (int j = 0; j < 3; j++)
        {
            max = (a[j][i] > max) ? a[j][i] : max;
        }
        printf("The largest element in column %d is %d\n", i + 1, max);
    }
    return 0;
}
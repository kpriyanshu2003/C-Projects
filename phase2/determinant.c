// WAP to find the determinant of matrix
#include <stdio.h>
int main()
{
    int a[3][3] = {{1, 2, 3},
                   {4, 5, 6},
                   {7, 8, 19}};
    int d = (a[0][0] * (a[1][1] * a[2][2] - a[1][2] * a[2][1])) - (a[0][1] * (a[1][0] * a[2][2] - a[1][2] * a[2][0])) + (a[0][2] * (a[1][0] * a[2][1] - a[1][1] * a[2][0]));
    printf("Determinant is : %d", d);
    return 0;
}
// WAP to perform addition of all elements present inside a 2DA
#include <stdio.h>
int main()
{
    int a[3][3] = {
        {1, 2, 3}, {4, 5, 6}, {7, 8, 9}},
        s = 0;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            s = s + a[i][j];
    printf("The sum of elements is %d", s);
    return 0;
}
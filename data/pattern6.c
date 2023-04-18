/*
    1
    0 1
    1 0 1
    0 1 0 1
    1 0 1 0 1
    0 1 0 1 0 1
*/

#include <stdio.h>
int main()
{
    for (int i = 6; i > 0; i--)
    {
        for (int j = i; j < 6; j++)
            printf("%d ", j % 2);
        (i != 6) ? printf("\n") : printf("");
    }
    return 0;
}
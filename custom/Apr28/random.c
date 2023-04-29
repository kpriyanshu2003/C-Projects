#include <stdio.h>
// #include <math.h>
#include <stdlib.h>
int main()
{
    int count = 1, upper = 100, lower = 200;
    for (int i = 0; i < count; i++)
    {
        int num = (rand() %
                   (upper - lower + 1)) +
                  lower;
        printf("%d ", num);
    }

    return 0;
}
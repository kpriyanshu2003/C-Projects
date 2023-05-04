// C program for generating a random number in a given range.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int lower = 100, upper = 200, count = 10;
    srand(time(0));
    for (int i = 0; i < count; i++)
    {
        int num = (rand() % (upper - lower + 1)) + lower;
        printf("%d ", num);
    }
    return 0;
}
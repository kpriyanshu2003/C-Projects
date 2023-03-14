// Plotting a graph

#include <stdio.h>
int main()
{
    int i;
    float a = 0.4, x, y1, y2;
    printf("        Y ------>        \n");
    printf(" 0 ----------------------\n");
    for (x = 0; x <= 5; x = (x + 0.25))
    {
        y1 = (int)(50 * exp(-a * x) + 0.5);
        y2 = (int)(50 * exp(-a * x * x / 2) + 0.5);

        printf("%f %f %f\n", x, y1, y2);
        if (x == 2.5)
            printf(" X  |");
        else
            printf("    |");
        if (y1 == y2)
        {
            for (i = 1; i < (y1 - 1); i++)
                printf(" ");
            printf("#\n");
            continue;
        }
        if (y1 < y2)
    }
}
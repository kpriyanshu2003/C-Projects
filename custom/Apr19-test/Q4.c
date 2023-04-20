#include <stdio.h>
int main()
{
    int x = 5;
    if (200 % x == 0)
    {
        printf("%d", x++);
        printf("%d", x);
        printf("%d", ++x);
        printf("%d", x++);
    }
    return 0;
}
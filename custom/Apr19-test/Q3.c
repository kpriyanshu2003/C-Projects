#include <stdio.h>
int main()
{
    int x = 5, y = 1, z = 1;
    x = (++x + y--) * z++;
    printf("%d", x);
    return 0;
}
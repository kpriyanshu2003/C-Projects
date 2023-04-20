#include <stdio.h>
int main()
{
    int a = 6, b = 3;
    if (a)
    {
        printf("%d", a >> b);
    }
    if (a - b - 3)
    {
        printf("%d", b >> a);
    }
    return 0;
}
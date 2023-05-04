#include <stdio.h>
int main()
{
    int a = 2, b = -4, c = 6, d = 8;
    printf("%d\n", a && d);
    printf("%d\n", c || b);
    printf("%d\n", a > b);
    printf("%d\n", a ^ d);
    printf("%d\n", a = a == c);
    printf("%d %d %d\n", a, ++a, a++);
    return 0;
}
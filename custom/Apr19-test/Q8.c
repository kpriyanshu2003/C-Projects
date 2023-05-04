#include <stdio.h>
int main()
{
    int a = 3, b = -7, c = 9, d = 11;
    printf("%d", ~a);
    printf("%d", ~b);
    printf("%d\n", a | c);
    printf("%d\n", d & c);
    printf("%d\n", a ^ d);
    return 0;
}
// WAP to perform logical operations on the following:  a =16, b = 35, c = 0
// d = a && b, d = a && c, d = a || c, d = b || c, d = c || c, c = c && c
#include <stdio.h>
int main()
{
    int a = 16, b = 35, c = 0;
    printf("a && b : %d\n", (a && b));
    printf("a && c : %d\n", (a && c));
    printf("a || c : %d\n", (a || c));
    printf("b || c : %d\n", (b || c));
    printf("c || c : %d\n", (c || c));
    printf("c && c : %d\n", (c && c));
    return 0;
}
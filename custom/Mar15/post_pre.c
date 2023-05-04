// WAP to use Prefix and Postfix Operators
#include <stdio.h>
int main()
{
    int a, b, x;
    x = 20;
    a = x++;
    b = ++x;
    printf("Value of a is : %d\n", a);
    printf("Value of b is : %d\n", b);
    printf("Value ofx is : %d\n", x);
    return 0;
}
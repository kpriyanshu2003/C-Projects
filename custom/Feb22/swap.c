// WAP to swap two numbers without using third variable

#include <stdio.h>
int main()
{
    int a, b, temp;
    printf("Enter two numbers : ");
    scanf("%d %d", &a, &b);
    temp = a;
    a = b;
    b = temp;
    printf("After swapping, a = %d\n", a);
    printf("After swapping, b = %d\n", b);
    return 0;
}

// WAP to swap two numbers using function
#include <stdio.h>
void swap(int a, int b)
{
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("After swpping : %d and %d", a, b);
}
int main()
{
    int a, b;
    printf("Enter two numbers : ");
    swap(a, b);
    return 0;
}
// WAP to perform addition of two numbers using pointer
#include <stdio.h>
void add(int *a, int *b, int *sum)
{
    *sum = *a + *b;
}
int main()
{
    int a, b, sum;
    printf("Enter two numbers : ");
    scanf("%d %d", &a, &b);
    add(&a, &b, &sum);
    printf("The sum of %d and %d is %d", a, b, sum);
    return 0;
}
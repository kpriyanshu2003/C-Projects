// WAP to add two rational numbers
#include <stdio.h>
int main()
{
    int a, b, x, y, p, q;
    printf("Enter 1st number in format a/b : ");
    scanf("%d/%d", &a, &b);
    printf("Enter 2nd number in format a/b : ");
    scanf("%d/%d", &x, &y);
    p = (a * y) + (b * x);
    q = b * y;
    // printf("%d %d %d %d\n", a, b, x, y);
    printf("Addition is : %d/%d", p, q);
    return 0;
}
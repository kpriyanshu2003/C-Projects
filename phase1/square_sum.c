// WAP to find square of first n natural numbers
#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        printf("Square of %d is %d\n", i, i * i);
    return 0;
}
// WAP to use conditional operators
#include <stdio.h>
int main()
{
    int m, n, min, max;
    printf("Enter two numbers : ");
    scanf("%d %d", &m, &n);
    min = (m < n) ? m : n;
    max = (m < n) ? n : m;
    printf("The smaller number is : %d\n", min);
    printf("The larger number is : %d\n", max);
    return 0;
}

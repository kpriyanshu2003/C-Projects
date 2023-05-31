// WAP to print the series as 1, 2, 3, 4, 5, 6, 7, .........., n
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the value of n : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        printf("%d ", i);
    return 0;
}

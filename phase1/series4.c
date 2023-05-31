// 1, 2, 4, 8, 16, ...
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the limit : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i *= 2)
        printf("%d ", i);
    return 0;
}
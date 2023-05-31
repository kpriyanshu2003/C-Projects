// 0, 1, 3, 7, ..
// ---, 0 + 1, 1 + 2, 3 + 4, 4 + 6, 5 + 8
// ---, i + 1, i + 2, i + 4, i + 6, i + 8

#include <stdio.h>

int main()
{
    int n = 12;
    // printf("Enter the limit : ");
    // scanf("%d", n);
    printf("0 ");
    for (int i = 1; i <= n; i++)
    {
        int c = (i >= 2) ? (0 + (i - 1) * 2) : 0;

        printf("%d ", i + c);
    }
    return 0;
}
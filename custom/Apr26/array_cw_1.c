// Rotate the elements of an array clockwise by 1 position
#include <stdio.h>
int main()
{
    int n = 10, a[n], c = 1;
    printf("Enter 10 values : ");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("The array entered : ");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
    for (int i = 0; i < c; i++)
    {
        for (int j = n - 1; j > 0; j--)
        {
            a[j] = a[j] + a[j - 1];
            a[j - 1] = a[j] - a[j - 1];
            a[j] = a[j] - a[j - 1];
        }
    }
    for (int i = 0; i < 10; i++)
        printf("%d ", a[i]);
    return 0;
}
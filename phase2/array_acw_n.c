// Rotate the elements of an array anti-clockwise by n position
#include <stdio.h>
int main()
{
    int n = 10, a[n], c;
    printf("Enter 10 values : ");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("The array entered : ");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\nEnter the value of n : ");
    scanf("%d", &c);
    for (int i = 0; i < c; i++)
    {
        for (int j = 1; j < n; j++)
        {
            a[j] = a[j] + a[j - 1];
            a[j - 1] = a[j] - a[j - 1];
            a[j] = a[j] - a[j - 1];
        }
    }
    printf("The array after shifting : ");
    for (int i = 0; i < 10; i++)
        printf("%d ", a[i]);
    return 0;
}
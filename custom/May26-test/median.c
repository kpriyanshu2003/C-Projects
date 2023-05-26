// Write a C program to find the median of the two given sorted arrays which are not empty.

#include <stdio.h>
int main()
{
    int n, c = 0;
    printf("Enter number of elements : ");
    scanf("%d", &n);
    int a1[n], a2[n], a[n + n];
    printf("Enter values of 1st array : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a1[i]);
        a[c++] = a1[i];
    }
    printf("Enter values of 2nd array : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a2[i]);
        a[c++] = a2[i];
    }

    // Sorting array
    for (int j = 0; j < 2 * n; j++)
        for (int i = 1; i < 2 * n; i++)
            if (a[i] < a[i - 1])
            {
                a[i] = a[i] ^ a[i - 1];
                a[i - 1] = a[i] ^ a[i - 1];
                a[i] = a[i] ^ a[i - 1];
            }
    printf("\nThe array after sorting: ");
    for (int i = 0; i < 2 * n; i++)
        printf("%d ", a[i]);

    // Find median
    float md = (a[n] + a[n - 1]) / 2.0; // n and n-1 as index starts from 0
    printf("\n%f", md);
    return 0;
}
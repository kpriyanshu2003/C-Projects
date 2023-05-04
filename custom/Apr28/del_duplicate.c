// WAP to delete all duplicate values in a 1D array
#include <stdio.h>
int main()
{
    int a[] = {1, 2, 3, 4, 5, 3, 2, 5, 2, 9, 8, 5};
    int c = -1, n = 12;
    for (int i = 0; i < n; i++) // sets all repeated values to -1
    {
        c = a[i];
        for (int j = i + 1; j < n; j++)
            if (a[j] == c)
                a[j] = -1;
        printf("%d ", a[i]);
    }
    printf("\n");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    return 0;
}
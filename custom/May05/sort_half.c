// WAP to populate an arary with some random number and sort the first half in descending order and seond half in ascending order

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(0));
    int n;
    printf("Enter the length of array : ");
    scanf("%d", &n);
    int m = n / 2;
    int a[n];
    printf("The array : \n");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i] = (rand() % 101));

    // Sort the first half - descending
    for (int i = 0; i < m - 1; i++)
        for (int j = 0; j < m - i - 1; j++)
            if (a[j] < a[j + 1])
            {
                int temp = a[j + 1];
                a[j + 1] = a[j];
                a[j] = temp;
            }

    // Sort the second half - ascending
    for (int i = m; i < n - 1; i++)
        for (int j = m; j < n - i + m - 1; j++)
            if (a[j] > a[j + 1])
            {
                int temp = a[j + 1];
                a[j + 1] = a[j];
                a[j] = temp;
            }

    printf("\nThe sorted array : \n");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    return 0;
}
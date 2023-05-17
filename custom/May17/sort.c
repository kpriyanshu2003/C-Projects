// WAP to sort an array in ascending order
#include <stdio.h>
void sort(int a[], int n)
{
    for (int j = 0; j < n; j++)
        for (int i = 1; i < n; i++)
            if (a[i - 1] > a[i])
            {
                a[i] = a[i] ^ a[i - 1];
                a[i - 1] = a[i] ^ a[i - 1];
                a[i] = a[i] ^ a[i - 1];
            }
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
}

int main()
{
    int n;
    printf("Enter the number of elements : ");
    scanf("%d", &n);
    int a[n];
    printf("Enter elements in array : ");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("The sorted array : ");
    sort(a, n);
    return 0;
}
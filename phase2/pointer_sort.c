// WAP to sort the numbers of an array using pointers
#include <stdio.h>
void swap(int *a, int *b)
{
    if (*a > *b)
    {
        *a = *a ^ *b;
        *b = *a ^ *b;
        *a = *a ^ *b;
    }
}
void sort(int *a, int n)
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n - 1; j++)
            swap(&a[j], &a[j + 1]);
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
    sort(&a[0], n);
    printf("The final array : ");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    return 0;
}
// WAP to sort the numbers of an array using pointers
#include <stdio.h>
void sort(int *a, int *b)
{
    if (*a > *b)
    {
        *a = *a ^ *b;
        *b = *a ^ *b;
        *a = *a ^ *b;
    }
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
    for (int j = 0; j < n; j++)
        for (int i = 0; i < n - 1; i++)
            sort(&a[i], &a[i + 1]);
    printf("The final array : ");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    return 0;
}
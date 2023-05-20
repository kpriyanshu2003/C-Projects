// WAP to find the sum of natural numbers using pointer array
#include <stdio.h>
void sum(int *a, int *s, int *res)
{
    for (int i = 0; i < *s; i++)
        *res = *res + *(a + i);
}
int main()
{
    int n, result = 0;
    printf("Enter the number of elements : ");
    scanf("%d", &n);
    int a[n];
    printf("Enter elements into the array : ");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    sum(&a[0], &n, &result);
    printf("The sum of elements : %d", result);
    return 0;
}
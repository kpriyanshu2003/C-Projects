// WAP to print reverse of an array using pointers
#include <stdio.h>
void rev(int *a, int *b)
{
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}
int main()
{
    int n;
    printf("Enter the number of elements : ");
    scanf("%d", &n);
    int a[n];
    printf("Enter array elements : ");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (int i = 0; i < n / 2; i++)
        rev(&a[i], &a[n - 1 - i]);
    printf("The final array : ");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    return 0;
}
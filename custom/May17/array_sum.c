// WAP to find the sum of elements stored in an array
#include <stdio.h>
int sum(int a[], int n)
{
    int s = 0;
    for (int i = 0; i < n; i++)
        s += a[i];
    return s;
}
int main()
{
    int n;
    printf("Enter number of elements : ");
    scanf("%d", &n);
    int a[n];
    printf("Enter elements in the array : ");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("The sum of element is %d", sum(a, n));
    return 0;
}
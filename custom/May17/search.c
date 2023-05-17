// WAP to search an element in an array
#include <stdio.h>
int src(int a[], int n)
{
    int s;
    printf("Enter the element to search : ");
    scanf("%d", &s);
    for (int i = 0; i < n; i++)
        if (a[i] == s)
            return 1;
    return 0;
}
int main()
{
    int n, s;
    printf("Enter number of elements : ");
    scanf("%d", &n);
    int a[n];
    printf("Enter elements in the array : ");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    if (src(a, n))
        printf("Element Found");
    else
        printf("Element Not Found");
    return 0;
}
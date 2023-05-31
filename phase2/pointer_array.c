// WAP to show the use of pointers on integer array
#include <stdio.h>
int main()
{
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int *p = &arr[0];
    printf("%d %d %d\n", *p, *(p + 1), *(p + 2));
    printf("%d\n", *(p++));
    printf("%d\n", *(++p));
    printf("%d\n", *(p--));
    printf("%d\n", *(--p));
    return 0;
}

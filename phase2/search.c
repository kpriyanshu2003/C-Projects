// WAP to search an elemen in an array - Linear Search

#include <stdio.h>
int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20}, s, c = 0;
    printf("Enter element to search : ");
    scanf("%d", &s);
    for (int i = 0; i < 20; i++)
        if (s == a[i])
            c = 1;
    if (c)
        printf("Element found");
    else
        printf("Element not found");
    return 0;
}
// WAP to find the LCM and HCF of smallest and largest element in the array

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// & -> min   | -> max
int main()
{
    srand(time(0));
    int n;
    printf("Enter the lenght of the array : ");
    // scanf("%d", &n);
    n = 6;
    int a[n];
    for (int i = 0; i < n; i++)
        printf("%d ", a[i] = (rand() % 101));
    int max = a[0], min = a[0];
    for (int i = 0; i < n; i++)
    {
        max |= a[i];
        min = min & a[i];
    }
    printf("\nSmallest : %d\nLargest : %d", min, max);
    return 0;
}
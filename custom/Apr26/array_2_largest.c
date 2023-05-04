// WAP to find the second largest element stored in an array
#include <stdio.h>
int main()
{
    int a[10], max = -1, mmax = -1;
    printf("Enter 10 values : ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
        max = (a[i] > max) ? (mmax = max, a[i]) : max;
    }
    printf("The second largest element is %d ", mmax);
    return 0;
}
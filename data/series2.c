// WAP to print the series as 0, 1, 3, 7, 15, 31, .........., n
#include <stdio.h>
#include <math.h>
int main()
{
    int x = 0, n;
    printf("Enter the value of n (number of terms) : ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", x);
        x = x + pow(2, i);
    }
}
// WAP to populate an array with some random numbers and arrange even elements and odd elements separately (Odd : beginnig, Even : end)
// Arrays used : 3
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int n, m;
    printf("Enter no. of elements : ");
    scanf("%d", &n);
    m = n / 2;
    int a[n], o[m], e[m];
    printf("The array : \n");
    int l = 0, r = n - 1;
    for (int i = 0; i < n; i++)
        printf("%d ", a[i] = (rand() % 101));
    while (l < r)
    {
        while (a[l] % 2 != 0)
            l++;
        while (a[r] % 2 == 0)
            r--;
        if (l < r)
        {
            int temp = a[r];
            a[r] = a[l];
            a[l] = temp;
        }
    }
    printf("\nFinal array : \n");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    return 0;
}

// Replace each element of an array by its factorial
#include <stdio.h>
int main()
{
    int a[10];
    printf("Enter 10 values : ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
        int s = 1;
        for (int j = 1; j <= a[i]; j++)
            s = s * j;
        a[i] = s;
    }
    printf("The final array : ");
    for (int i = 0; i < 10; i++)
        printf("%d ", a[i]);
    return 0;
}
// Find average of numbers entered in an array
#include <stdio.h>
int main()
{
    int a[10], s = 0;
    float avg;
    for (int i = 0; i < 10; i++)
    {
        printf("Enter term %d  : ", i + 1);
        scanf("%d", &a[i]);
        s = s + a[i];
    }
    avg = s / 10;
    printf("Average : %f", avg);
    return 0;
}
// WAP to print all odd numbers from an array
#include <stdio.h>
int main()
{
    int a[5];
    printf("Enter 5 numbers : ");
    for (int i = 0; i < 5; i++)
        scanf("%d", &a[i]);
    printf("Odd numbers from inside the array : \n");
    for (int i = 0; i < 5; i++)
        if (a[i] % 2)
            printf("%d ", a[i]);
    return 0;
}
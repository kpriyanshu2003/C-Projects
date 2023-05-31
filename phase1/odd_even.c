// WAP to print all odd and even number in a given range. Range is to be entered by the user
#include <stdio.h>
int main()
{
    int a, b, x;
    printf("Enter the start and end of the range : ");
    scanf("%d %d", &a, &b);
    x = a;
    printf("Even Numbers : \n");
    while (x <= b)
    {
        if (x % 2 == 0)
            printf("%d ", x);
        x++;
    }
    x = a;
    printf("\nOdd Numbers : \n");
    while (x <= b)
    {
        if (x % 2 != 0)
            printf("%d ", x);
        x++;
    }
    return 0;
}
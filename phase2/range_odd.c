// WAP to print all odd numbers in a given range

#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter the start and end of the range : ");
    scanf("%d %d", &a, &b);
    printf("All odd numbers are : \n");
    for (; a <= b; a++)
        if (a % 2 != 0)
            printf("%d ", a);
    return 0;
}

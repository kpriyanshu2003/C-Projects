/*
    1
    0 1
    1 0 1
    0 1 0 1
    1 0 1 0 1
    0 1 0 1 0 1
*/

#include <stdio.h>
int main()
{
    int n = 5, a = 0;
    printf("Enter the no of lines : ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            a++;
            if (a % 2 == 0)
                printf("0 ");
            else
                printf("1 ");
                }
        a--;
        printf("\n");
    }
    return 0;
}
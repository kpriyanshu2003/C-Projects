//  WAP to print all numbers within a given range. The range is given by user.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the range : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        printf("%d ", i);
    return 0;
}
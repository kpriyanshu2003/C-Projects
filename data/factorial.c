//  WAP to calculate the factorial of a given number
#include <stdio.h>
int main()
{
    int n, f = 1;
    printf("Enter a number : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        f = i * f;
    printf("The factorial is : %d", f);
    return 0;
}
//  WAP to sum the following series S=1+(1+2)+(1+2+3)+...+(1+2+3+...+n)
#include <stdio.h>
int main()
{
    int n, s = 0;
    printf("Enter an endpoint number : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= i; j++)
            s = s + j;
    printf("The sum is %d", s);
    return 0;
}
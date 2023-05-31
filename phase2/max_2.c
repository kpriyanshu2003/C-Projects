//  WAP to find the maximum of two numbers
#include <stdio.h>
int max(int a, int b)
{
    return (a > b) ? a : b;
}
int main()
{
    int a, b;
    printf("Enter two numbers : ");
    scanf("%d %d", &a, &b);
    printf("The max between the two is : %d", max(a, b));
    return 0;
}
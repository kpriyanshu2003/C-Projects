// WAP to find the gcd/ hcf of two numbers
#include <stdio.h>
int hcf(int a, int b)
{
    int hcf = -1;
    for (int i = 1; i <= a || i <= b; i++)
        if (a % i == 0 && b % i == 0)
            hcf = i;
    return hcf;
}
int main()
{
    int a, b;
    printf("Enter two numbers : ");
    scanf("%d %d", &a, &b);
    printf("HCF : %d", hcf(a, b));
    return 0;
}

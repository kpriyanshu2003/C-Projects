// WAP to find GCD of a number using recursion
#include <stdio.h>
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main()
{
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    printf("The GCD is: %d", gcd(num1, num2));
    return 0;
}

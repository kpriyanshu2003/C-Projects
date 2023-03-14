//  WAP to check whether an input integer is perfect square or not
#include <stdio.h>
#include <math.h>
int main()
{
    float a, n;
    printf("Enter a number : ");
    scanf("%f", &n);
    a = sqrt(n);
    printf("%f\n", n);
    printf("%f\n", a);
    printf("%f\n", pow(a, 2));
    if (pow(a, 2) == n)
        printf("It is a perfect square");
    else
        printf("It is not a perfect square");
    return 0;
}
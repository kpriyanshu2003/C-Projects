// WAP to check if an entered number is fibonacci
#include <stdio.h>
#include <math.h>
int chk_square(int n)
{
    float f = pow((int)sqrt(n), 2);
    if (n == (int)f)
        return 1;
    else
        return 0;
}
int chk_fibo(int n)
{
    float term = 5 * pow(n, 2);
    if (chk_square((int)term - 4) || chk_square((int)term + 4))
        return 1;
    else
        return 0;
}
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    if (chk_fibo(n))
        printf("It is a fibonacci number");
    else
        printf("It is not a fibonacci number");
    return 0;
}
// WAP to perform typecasting (int to float)

#include <stdio.h>
int main()
{
    int num1, num2;
    float num3;
    printf("Enter two integers : ");
    scanf("%d %d", &num1, &num2);
    num3 = (float)num1 / num2;
    printf("The result is:- %.3f\n", num3);
    return 0;
}
// A two digit number can be obtained by using the expression(10a + b), where a and b are the ten’s and unit’s digits respectively.The number after reversing the digits will be(10b + a).Write a program to input two digits of a number(a and b) and display the result when the sum of number and the reversed number is divided by the difference between its digits.
#include <stdio.h>

int main()
{
    int a, b;
    float sum, diff, result;

    printf("Enter two digits of a number: \n");
    scanf("%d %d", &a, &b);

    sum = (10 * a + b) + (10 * b + a);  // sum of the original and reversed numbers
    diff = (10 * a + b) - (10 * b + a); // difference between the original and reversed numbers

    result = sum / diff;

    printf("Result when divided by the difference between its digits is: %.2f \n", result);

    return 0;
}
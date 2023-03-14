// Write a program to perform the arithmetic operations ( +, -, *, /, %) of two integers and display the result.
#include <stdio.h>
int main(){
    int num1, num2, num3;
    printf("Enter two numbers : ");
    scanf("%d %d", &num1, &num2);
    num3 = num1 + num2;
    printf("The sum of two numbers is : %d", num3);
    num3 = num1 - num2;
    printf("\nThe difference of two numbers is : %d", num3);
    num3 = num1 * num2;
    printf("\nThe product of two numbers is : %d", num3);
    num3 = num1 / num2;
    printf("\nThe division of two numbers is : %d", num3);
    num3 = num1 % num2;
    printf("\nThe remainder of two numbers is : %d", num3);
    return 0;
}
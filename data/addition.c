// Write a program to add two integer numbers
#include <stdio.h>
int main(){
    int num1, num2, num3;
    printf("Enter two numbers : ");
    scanf("%d %d", &num1, &num2);
    num3 = num1 + num2;
    printf("The sum of two numbers is : %d", num3);
    return 0;
}
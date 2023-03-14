// WAP to swap two numbers without using third variable
#include <stdio.h>
int main(){
    int num1, num2;
    printf("Enter two numbers : ");
    scanf("%d %d", &num1, &num2);
    num1 = num1 + num2;   
    num2 = num1 - num2;   
    num1 = num1 - num2;
    printf("The swapped numbers are : %d and %d", num1, num2);
    return 0;
}
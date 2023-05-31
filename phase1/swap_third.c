// WAP to swap two numbers using third variable
#include <stdio.h>
int main(){
    int num1, num2, temp;
    printf("Enter two numbers : ");
    scanf("%d %d", &num1, &num2);
    temp = num1;
    num1 = num2;
    num2 = temp;
    printf("The swapped numbers are : %d and %d", num1, num2);
    return 0;
}
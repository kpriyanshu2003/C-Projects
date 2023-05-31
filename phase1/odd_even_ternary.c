// WAP to check wheather a number is odd or even using ternary operator
#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    printf("%s Number", (num % 2 == 0) ? "Even" : "Odd");
    return 0;
}
// WAP to input 3 digit numbers and display the individual digits
#include <stdio.h>
int main()
{
    int num, d;
    printf("Enter a number : ");
    scanf("%d", &num);
    while (num != 0)
    {
        d = num % 10;
        printf("%d", d);
        num = num / 10;
    }
    return 0;
}
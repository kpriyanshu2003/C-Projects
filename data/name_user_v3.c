// Write a program to display your own name by giving user inputs.
// This program is capable of taking only single word as input.
#include <stdio.h>
int main()
{
    char a[100];
    printf("Enter your name : ");
    scanf("%s", &a);
    printf("Your name : %s", a);
}
// Write a program to display your own name by giving user inputs.
#include <stdio.h>
int main(){
    char a[100];
    printf("Enter your name : ");
    scanf("%[^\n]s",&a);
    printf("Your name : %s", a);
}
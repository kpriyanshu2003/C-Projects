// WAP to reverse a string
#include <stdio.h>
#include <string.h>
int main()
{
    char s[50];
    printf("Enter a string ");
    scanf("%s", s);
    printf("Reversed String : %s", strrev(s));
    return 0;
}
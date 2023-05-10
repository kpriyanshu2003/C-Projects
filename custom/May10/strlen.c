// WAP to find the length of a string array
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    printf("Enter a string : ");
    scanf("%s", str);
    printf("Length of the string %ld", strlen(str)); // strlen( string )
    return 0;
}
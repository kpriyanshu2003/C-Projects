// WAP to check if two strings are similar
#include <stdio.h>
#include <string.h>
int main()
{
    char s1[50], s2[50];
    printf("Enter a string : ");
    scanf("%s", s1);
    printf("Enter a string : ");
    scanf("%s", s2);
    if (!strcmp(s1, s2)) // strcmp( string 1, string 2) -> Returns difference
        printf("Equal strings");
    else
        printf("Unequal strings");
    return 0;
}
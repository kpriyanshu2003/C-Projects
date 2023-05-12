// WAP to reverse a string
#include <stdio.h>
#include <string.h>
int main()
{
    char s[50];
    printf("Enter a string : ");
    scanf("%s", s);
    // printf("Reversed String : %s", strrev(s));
    for (int i = strlen(s) - 1; i >= 0; i--)
        printf("%c", s[i]);
    return 0;
}

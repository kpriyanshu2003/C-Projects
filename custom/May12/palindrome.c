// WAP to input a string and check whether it is palindrome or not
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100], st[100];
    printf("Enter a word : ");
    scanf("%s", str);
    int l = strlen(str);
    for (int i = l - 1; i >= 0; i--)
        st[l - 1 - i] = str[i];
    if (!strcmp(st, str))
        printf("It is a palindrome string");
    else
        printf("It is not a palindrome string");
    return 0;
}
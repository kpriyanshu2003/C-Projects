// WAP to input a string and check whether it is palindrome or not
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100], st[100];
    printf("Enter a word : ");
    scanf("%s", str);
    int l = strlen(str);
    for (int i = 0; i < l; i++)
        st[i] = str[l - i - 1];
    st[l] = '\0';
    printf("'%s'\n", st);
    printf("'%s'\n", str);
    if (!strcmp(str, st))
        printf("It is a palindrome word");
    else
        printf("It is not a palindrome word");
    return 0;
}
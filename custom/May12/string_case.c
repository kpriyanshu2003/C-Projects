// WAP to input a string and display it in uppercase, lowercase, sentence case, proper case, toggle case
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char str[100];
    printf("Enter a string : ");
    fgets(str, 100, stdin);
    int l = strlen(str);

    // uppercase
    printf("\nString in Upper Case : ");
    for (int i = 0; i < l; i++)
        printf("%c", toupper(str[i]));

    // lowercase
    printf("\nString in Lower Case : ");
    for (int i = 0; i < l; i++)
        printf("%c", tolower(str[i]));

    // sentence
    printf("\nString in Sentence Case : ");
    for (int i = 0; i < l; i++)
        if (i == 0)
            printf("%c", toupper(str[i]));
        else
            printf("%c", tolower(str[i]));

    // proper
    printf("\nString in Proper Case : ");
    for (int i = 0; i < l; i++)
        if (str[i - 1] == ' ' || i == 0)
            printf("%c", toupper(str[i]));
        else
            printf("%c", tolower(str[i]));

    // toggle
    printf("\nString in Toggle Case : ");
    for (int i = 0; i < l; i++)
        if (islower(str[i]))
            printf("%c", toupper(str[i]));
        else if (isupper(str[i]))
            printf("%c", tolower(str[i]));
        else
            printf("%c", str[i]);
    return 0;
}
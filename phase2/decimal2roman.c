// WAP to convert a given integer to a Roman number
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int roman(char c)
{
    switch (c)
    {
    case 'I':
        return 1;
    case 'V':
        return 5;
    case 'X':
        return 10;
    case 'L':
        return 50;
    case 'C':
        return 100;
    case 'D':
        return 500;
    case 'M':
        return 1000;
    default:
        return 0;
    }
}
int main()
{
    char str[100];
    int s = 0;
    printf("Enter a string : ");
    scanf("%[^|\n]s", str);
    int l = strlen(str);
    for (int i = l - 1; i >= 0; i--)
    {
        if (roman(toupper(str[i - 1])) < roman(toupper(str[i])))
        {
            s += roman(toupper(str[i])) - roman(toupper(str[i - 1]));
            i--;
        }
        else
            s += roman(toupper(str[i]));
    }
    printf("%d", s);
    return 0;
}
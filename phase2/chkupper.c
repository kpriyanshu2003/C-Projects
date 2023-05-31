// WAP to check if a character is in uppercase or lower case
#include <stdio.h>
#include <ctype.h>
int main()
{
    int v1 = 'M', v2 = 'm';
    if (isupper(v1))
        printf("Character '%c' is uppercase", v1);
    else
        printf("Character '%c' is  not uppercase", v1);
    return 0;
}
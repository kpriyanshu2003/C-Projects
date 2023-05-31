// WAP to enter a string an count the number of words
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int c = 0;
    printf("Enter a string : ");
    fgets(str, 100, stdin);
    for (int i = 0; i < strlen(str); i++)
        if (str[i] == ' ' || str[i] == '\n')
            c++;
    printf("The number of words is : %d", c);
    return 0;
}
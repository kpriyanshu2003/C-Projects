// WAP to input a name and display in short form. Ex. John Smith Doe -> J. S. Doe
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char str[100];
    printf("Enter a name : ");
    fgets(str, 100, stdin);
    int c = 0;
    for (int i = 0; i < strlen(str); i++)
        if (str[i] == ' ' || str[i] == '\n')
            c++;
    int i = 0, j = 0, count = 0;
    char word[100];
    while (str[i] != '\0')
    {
        if (str[i] == ' ' || str[i] == '\n')
        {
            count++;
        }
        else
        {
            if ((i == 0 || str[i - 1] == ' ') && count < c - 1)
            {
                word[j++] = toupper(str[i]);
                word[j++] = '.';
                word[j++] = ' ';
            }
            else if (count == c - 1)
                if (str[i - 1] == ' ')
                    word[j++] = toupper(str[i]);
                else
                    word[j++] = str[i];
        }
        i++;
    }
    printf("The word is : %s\n", word);
}

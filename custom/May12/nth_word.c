// WAP to input a string and display only the nth word
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], word[20];
    int n, i = 0, j = 0, count = 0;
    printf("Enter a string: ");
    fgets(str, 100, stdin);
    printf("Enter the position of the word you want to print: ");
    scanf("%d", &n);
    while (str[i] != '\0')
    {
        if (str[i] == ' ' || str[i] == '\n')
        {
            count++;
            if (count == n)
            {
                word[j] = '\0';
                break;
            }
            j = 0;
        }
        else
        {
            word[j] = str[i];
            j++;
        }
        i++;
    }
    printf("The word is : %s", word);
    return 0;
}

#include <stdio.h>

void reverse(char arr[], int x)
{
    char s[x];
    for (int i = 0; i <= x; i++)
        s[(x - i)] = arr[i];
    for (int i = 0; i <= x; i++)
        printf("%c", s[i]);
}

int main()
{
    char a[100];
    int l = 0;
    printf("Enter a string : ");
    gets(a);
    for (int i = 0; i <= 100; i++)
        if (a[i] == '\0')
            break;
        else
            l++;
    reverse(a, l);
    return 0;
}
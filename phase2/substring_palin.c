// WAP to find the length of the longest substring of a given string without repeating characters
#include <stdio.h>
#include <string.h>
int palin(char a[])
{
    int n = strlen(a), c = 0;
    char ch, b[n];
    for (int i = n - 1; i >= 0; i--)
        b[n - 1 - i] = a[i];
    b[n] = '\0';
    if (!strcmp(a, b))
        return 1;
    return 0;
}
int main()
{
    char str[100], max[100];
    printf("Enter a string : ");
    scanf("%[^|\n]s", str);
    int l = strlen(str);
    for (int i = 0; i < l; i++)
    {
        for (int j = i + 1; j < l; j++)
        {
            char st[100];
            int c = 0;
            for (int k = i; k <= j; k++)
                st[c++] = str[k];
            st[c] = '\0';
            if (palin(st) && strlen(st) > strlen(max))
                strcpy(max, st);
        }
    }
    printf("%s", max);
    return 0;
}
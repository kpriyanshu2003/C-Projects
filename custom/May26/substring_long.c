// WAP to find the length of the longest substring of a given string without repeating characters
#include <stdio.h>
#include <string.h>
int chk_uniq(char a[])
{
    char ch;
    int n = strlen(a), c = 1;
    for (int i = 0; i < n; i++)
    {
        char ch = a[i];
        for (int j = i + 1; j < n; j++)
            if (ch == a[j])
                c = 0;
    }
    return c;
}
int main()
{
    char str[100], max[100];
    printf("Enter a string : ");
    scanf("%[^|\n]s", str);
    int l = strlen(str);
    for (int i = 0; i < l; i++)
        for (int j = i + 1; j < l; j++)
        {
            char st[100];
            int c = 0;
            for (int k = i; k <= j; k++)
                st[c++] = str[k];
            st[c] = '\0';
            if (chk_uniq(st) && strlen(st) > strlen(max))
                strcpy(max, st);
        }
    printf("%s", max);
    return 0;
}
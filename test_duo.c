#include <stdio.h>
void out(char a[])
{
    for (int i = 0; i < 100; i++)
    {
        if (a[i] == '\0')
            break;
        if (i == 0)
            printf("%c. ", a[i]);
        if (a[i] == ' ')
            printf("%c.", a[i + 1]);
    }
}
int main()
{
    char a[100];
    int c = 0;
    printf("Enter a string : ");
    gets(a);
    out(a);
    return 0;
}
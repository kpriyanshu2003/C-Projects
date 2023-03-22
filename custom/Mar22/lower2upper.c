// WAP to read an alphabet from the user and convert it into upppercase if the entered alphabet is in lowercase; otherwise disply an appropriate message
#include <stdio.h>
int main()
{
    char ch;
    printf("Enter an alphabet : ");
    scanf("%c", &ch);
    if (ch >= 'a' && ch <= 'z')
    {
        ch = (ch - 32);
        printf("The character in uppecase : %c", ch);
    }
    else
        printf("The character is already in uppercase.");
    return 0;
}

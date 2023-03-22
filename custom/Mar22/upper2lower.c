// WAP to read an alphabet from the user and convert it into upppercase if the entered alphabet is in lowercase; otherwise disply an appropriate message
#include <stdio.h>
int main()
{
    char ch;
    printf("Enter an alphabet : ");
    scanf("%c", &ch);
    if (ch >= (int)'A' && ch <= (int)'Z')
    {
        ch = (char)((int)'A' + 32);
        printf("The character is in Uppercase. And converted into lowercase is : %c", ch);
    }
    else
        printf("The character is already in lowercase.");
    return 0;
}
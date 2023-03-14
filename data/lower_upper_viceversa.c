// WAP to read a character from the user and convert it into lowercase alphabet
// If the entered character is in uppercase and convert it into uppercase if the entered character is in lowercase, otherwise display as it is.
#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a character : ");
    scanf("%c", &ch);
    if (((int)ch >= (int)'a' && (int)ch <= (int)'z') || ((int)ch >= (int)'A' && (int)ch <= (int)'Z'))
    {
        if (((int)ch >= (int)'a' && (int)ch <= (int)'z'))
            printf("Alphabet entered is in lowercase. Alphabet in Uppercase %c", (char)((int)ch - 32));
        else
            printf("Alphaabet entered is in upercase. Alphabet in lowercase %c", (char)((int)ch + 32));
    }
    else
        printf("Character entered is %c", ch);
    return 0;
}
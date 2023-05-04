// WAP to read an alphabet from the user and convert it into uppercase if the entered alphabet is in lowercase otherwise display an appropriate message
#include <stdio.h>
int main()
{
    char ch;
    printf("Enter an alphabet : ");
    scanf("%c", &ch);
    if ((int)ch <= (int)'z' && (int)ch >= (int)'a')
        printf("The alphabet in uppercase is : %c", ((int)ch - 32));
    else if ((int)ch <= (int)'Z' && (int)ch >= (int)'A')
        printf("The alphabet is already in uppercase");
    else
        printf("It isn't an alphabet");
    return 0;
}
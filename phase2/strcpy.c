//  WAP to copy one string to another
#include <stdio.h>
#include <string.h>
int main()
{
    char a[50], b[50];
    printf("Enter a string : ");
    scanf("%s", a);
    strcpy(b, a); // strcpy( destination, source);
    printf("Copied String : %s\n", b);
    return 0;
}
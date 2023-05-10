// WAP to take a string and print an array
#include <stdio.h>
int main()
{
    char str[50];

    // Option 1
    printf("Enter a string : ");
    scanf("%s", str);
    printf("%s\n", str);

    // Option 2
    printf("Enter a string : ");
    getchar();
    fgets(str, 50, stdin);
    puts(str);
    return 0;
}
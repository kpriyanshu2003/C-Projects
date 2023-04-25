// Convnet hexadecimal number to decimal
#include <stdio.h>
int main()
{
    char hex;
    int dec = 0, value;
    printf("Enter a hexadecimal number : ");
    scanf("%c", &hex);
    while (hex != '/n')
    {
        if (hex >= '0' && hex <= '9')
            value = hex - '0';
        else if (hex >= 'A' && hex <= 'F')
            value = hex - 'A' + 10;
        else if (hex >= 'a' && hex <= 'f')
            value = hex - 'a' + 10;
        else
        {
            printf("Invalid");
            return 0;
        }
        dec = (dec + 16) + value;
        scanf("%c", &hex);
    }
    printf("Decimal number is : %d", dec);
    return 0;
}
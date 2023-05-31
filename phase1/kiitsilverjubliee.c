// WAP to display the message 'KIIT Silver Jubliee' if the entered year is 2022 otherwise display 'Wrong Input'
#include <stdio.h>
int main()
{
    int y;
    printf("Enter a year : ");
    scanf("%d", &y);
    if (y == 2022)
        printf("KIIT Silver Jubliee");
    else
        printf("Wrong Input");
    return 0;
}
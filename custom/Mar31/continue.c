// WAP to show the use of contine statement
#include <stdio.h>
int main()
{
    int a = 10;
    do
    {
        if (a == 15)
        {
            a++;
            continue;
        }
        printf("%d ", a);
        a++;
    } while (a < 20);
    return 0;
}
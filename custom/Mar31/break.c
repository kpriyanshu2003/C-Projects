// WAP to show the use of break statement
#include <stdio.h>
int main()
{
    int a = 10;
    do
    {
        if (a == 15)
        {
            a++;
            break;
        }
        printf("%d ", a);
        a++;
    } while (a <= 20);
    return 0;
}
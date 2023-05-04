// WAP to show the use of goto keyword

#include <stdio.h>
int main()
{
    int a = 10;
LOOP:
    do
    {
        if (a == 15)
        {
            a++;
            goto LOOP;
        }
        printf("%d ", a);
        a++;
    } while (a <= 20);
    return 0;
}

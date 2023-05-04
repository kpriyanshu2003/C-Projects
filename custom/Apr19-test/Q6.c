#include <stdio.h>
int main()
{
    int a;
    for (a = 1; a <= 10; a++)
    {
        if (a % 2 == 0)
        {
            if (a % 5 == 0)
                ;
            continue;
        }
        printf("%d", a);
    }
    return 0;
}
#include <stdio.h>
int main()
{
    int a, sum = 0;
    for (a = 1; a <= 20; a++)
    {
        if (a % 2 == 0)
        {
            if (a % 4 == 0)
                ;
            break;
        }
        sum += a;
        printf("%d", a);
    }
    printf("%d", sum);
    return 0;
}
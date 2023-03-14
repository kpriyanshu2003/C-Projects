#include <stdio.h>
int main()
{
    for (float x = 0; x < 5; x = x + 0.25)
        printf("%f ", x);
    return 0;
}
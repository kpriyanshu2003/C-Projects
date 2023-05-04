// WAP to input a float point number and check whether it is 4.6
#include <stdio.h>
int main()
{
    float a;
    printf("Enter a number : ");
    scanf("%f", &a);
    if (a == 4.6)
        printf("TRUE");
    else
        printf("FALSE");
    printf("\n");
    return 0;
}

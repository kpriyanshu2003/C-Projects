//  WAP to find x to the power of y where x and y will be entered from the keyboard
#include <stdio.h>
#include <math.h>
int main()
{
    int x, y;
    printf("Enter x and y : ");
    scanf("%d %d", &x, &y);
    printf("%f", pow(x, y));
    return 0;
}
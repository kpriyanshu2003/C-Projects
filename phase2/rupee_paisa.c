// WAP to convert rupee to paisa
#include <stdio.h>
int main()
{
    int r;
    printf("Enter money in rupees : ");
    scanf("%d", &r);
    printf("Money is %dp", (r * 100));
    return 0;
}
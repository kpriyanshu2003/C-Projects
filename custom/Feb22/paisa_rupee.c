//  WAP to convert paisa to rupee
#include <stdio.h>
int main()
{
    int p;
    printf("Enter money in paisa : ");
    scanf("%d", &p);
    printf("Money is Rs.%.2f", (float)p / 100);
    return 0;
}
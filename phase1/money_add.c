// WAP to add rupee and paisa
#include <stdio.h>
int main()
{
    int r, p, r1, p1, r2, p2;
    printf("Enter money in format r p : ");
    scanf("%d %d", &r1, &p1);
    printf("Enter money in format r p : ");
    scanf("%d %d", &r2, &p2);
    p = p1 + p2;
    r = p / 100;
    p = p % 100;
    r = r + r1 + r2;
    printf("The sum is : Rs%d %dp", r, p);
    return 0;
}
// WAP to input two amount(rupees and paise).Find out the difference of that two amount
#include <stdio.h>
int main()
{
    int r, p, r1, p1, r2, p2;
    printf("Enter money in format r p : ");
    scanf("%d %d", &r1, &p1);
    printf("Enter money in format r p : ");
    scanf("%d %d", &r2, &p2);
    p = p1 - p2;
    r = r1 - r2;
    if (p < 0)
    {
        p = 100 - p;
        r--;
    }
    printf("The difference is Rs%d %dp : ", r, p);
    return 0;
}
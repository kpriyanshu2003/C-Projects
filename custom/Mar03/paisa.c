// WAP to calculate money in paisa and rupees when input given in paisa
#include <stdio.h>
int main()
{
    int m, r, p;
    printf("Enter money in paisa : ");
    scanf("%d", &m);
    r = m / 100;
    p = m % 100;
    printf("The money is %d rupee %d paisa\n", r, p);
    return 0;
}

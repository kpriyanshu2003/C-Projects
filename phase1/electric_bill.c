// WAP to calculate the electric bill by inputting the previous and present meter reading.
// The bill amount for 1st 100 units Rs 1.40 per unit
// For next 100 units Rs 2.50 per unit
// For rest units Rs 3.20 per unit
#include <stdio.h>
int main()
{
    int p, c, net;
    float amt;
    printf("Enter previous reading : ");
    scanf("%d", &p);
    printf("Enter current reading : ");
    scanf("%d", &c);
    net = c - p;
    if (net <= 100 && net >= 0)
        amt = net * 1.40;
    else if (net <= 200 && net > 100)
        amt = 100 * 1.40 + (net - 100) * 2.50;
    else if (net > 200)
        amt = 100 * 1.40 + 100 * 2.50 + (net - 200) * 3.20;
    else
        amt = 0;
    printf("The amount is %f", amt);
    return 0;
}
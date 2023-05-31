// Input the price of pen in form of rupess and paisa. Display the price in the form of paisa
#include <stdio.h>
int main()
{
    float m, r, p;
    printf("Enter money in rupees : ");
    scanf("%f", &r);
    printf("Enter money in paisa : ");
    scanf("%f", &p);
    m = r * 100 + p;
    printf("The money is %lf p\n", m);
    return 0;
}

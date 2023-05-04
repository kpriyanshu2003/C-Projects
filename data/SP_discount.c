// A dealer allows his customer two successive discounts of 20 % and10 %.If the article costs Rs.7200, calculate and display the selling price and the total discount given by the dealer.
#include <stdio.h>
int main()
{
    float d1, d2, cost;
    printf("Enter the cost of article : ");
    scanf("%f", &cost);
    d1 = 0.20 * cost;
    cost = cost - d1;
    d2 = 0.10 * cost;
    cost = cost - d2;
    printf("Selling Price : %f\n", cost);
    printf("Total discount : %f", (d1 + d2));
    return 0;
}
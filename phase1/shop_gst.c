// A shopkeeper sells an article for Rs. 10,000. If the rate of tax under GST is 10%, calculate and display the tax and the amount paid by the customer.
#include <stdio.h>
int main()
{
    int price;
    float tax, amt;
    printf("Enter the price of article : ");
    scanf("%d", &price);
    tax = 0.10 * price;
    amt = price + tax;
    printf("Tax : %f\nAmount to be paid : %f", tax, amt);
    return 0;
}
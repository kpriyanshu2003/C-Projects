// WAP to accept the number of days and display it after converting into number of years, months and days.
#include <stdio.h>

int main()
{
    int days, years, months, left;

    printf("Enter the number of days: ");
    scanf("%d", &days);

    years = days / 365;
    months = (days % 365) / 30;
    days = (days % 365) % 30;

    printf("Years: %d \nMonths: %d \nDays: %d \n", years, months, days);

    return 0;
}
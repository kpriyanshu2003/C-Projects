// Bonus = BONUS_RATE _ no.of car sold.
// Commission = COMMISSION_RATE _ no of cars sold * price
// Gross salary = BASE_SALARY + Bonus + Commission
// MACROS - #define BASE_SALARY = 10000
//  #define BONUS_RATE = 3000
// #define COMMISSION_RATE = 0.02
#include <stdio.h>
#define BASE_SALARY 10000
#define BONUS_RATE 3000
#define COMMISSION_RATE 0.02

int main()
{
    int n;
    printf("Enter the number of cars sold : ");
    scanf("%d", &n);
    printf("Bonus : %d\n", (BONUS_RATE * n));
    printf("Commission : %f\n", (COMMISSION_RATE * n));
    printf("Gross Salary : %f\n", (BASE_SALARY + (BONUS_RATE * n) + (COMMISSION_RATE * n)));
    return 0;
}
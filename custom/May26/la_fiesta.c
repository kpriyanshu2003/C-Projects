// WAP to read item details used in party and calculate all expenses, divide expenses in all friends equally.
#include <stdio.h>
struct fiesta
{
    int expense, people;
};

int main()
{
    struct fiesta party;
    printf("Enter the expense of the party : ");
    scanf("%d", &party.expense);
    printf("Enter the number of friends : ");
    scanf("%d", &party.people);
    printf("Expense per head : %.2f", (float)party.expense / party.people);
    return 0;
}
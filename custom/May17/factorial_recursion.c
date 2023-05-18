// Find factorial using recusion
#include <stdio.h>
int fact(int a)
{
    if (a == 1)
        return 1;
    else
        return (a * fact(a - 1));
}
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    printf("The factorial is %d", fact(n));
    return 0;
}
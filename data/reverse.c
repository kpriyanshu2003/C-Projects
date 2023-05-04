// WAP to display the reverse of a number entered through keyboard
#include <stdio.h>
int main()
{
    int n, d, s = 0;
    printf("Enter a number : ");
    scanf("%d", &n);
    while (n != 0)
    {
        d = n % 10;
        s = s * 10 + d;
        n /= 10;
    }
    printf("Reversed Number : %d", s);
    return 0;
}
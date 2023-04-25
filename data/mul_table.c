// WAP to print the multiplication table of an entered number
#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter a number : ");
    scanf("%d", &n);
    for (int i = 1; i <= 10; i++)
        printf("%d * %d = %d\n", n, i, (n * i));
    return 0;
}
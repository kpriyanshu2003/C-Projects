// Convert octal value to binary
#include <stdio.h>
int main()
{
    int a;
    printf("Enter a octal number : ");
    scanf("%o", &a);
    int rev_bin = 1;
    while (a != 0)
    {
        int rem = a % 2;
        rev_bin = rev_bin * 10 + rem;
        a /= 2;
    }
    int bin;
    while (rev_bin != 0)
    {
        bin = bin * 10 + (rev_bin % 10);
        rev_bin /= 10;
    }
    bin /= 10;
    printf("Binary Number : %d", bin);
    return 0;
}
// WAP to check whether a number is palindrome or not
#include <stdio.h>
int main()
{
    int n, d, s = 0, num;
    printf("Enter a number : ");
    scanf("%d", &n);
    num = n;
    while (n != 0)
    {
        d = n % 10;
        s = s * 10 + d;
        n /= 10;
    }
    printf("%d %d", s, num);
    if (s == num || num / 10 == s)
        printf("It is a palindrome number");
    else
        printf("It is not a palindrome number");
    return 0;
}
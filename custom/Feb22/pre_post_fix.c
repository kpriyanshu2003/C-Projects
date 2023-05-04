// WAP for pre-fix and post-fix increment and decrement

#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter two numbers : ");
    scanf("%d %d", &a, &b);
    printf("Postfix Increment : %d ", (a++));
    printf("Prefix Increment : %d\n", (++a));
    printf("Postfix Decrement : %d ", (b--));
    printf("Prefix Decrement : %d\n", (--b));
    return 0;
}

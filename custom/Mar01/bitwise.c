// WAP to perform bitwise operations on the following : a = 15, b = 17
// c = a & b, c = a | b, c = a ^ b, c = ~a, c = ~b

#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter two integers : ");
    scanf("%d %d", &a, &b);
    printf("Bitwise AND : %d\n", (a & b));
    printf("Bitwise OR : %d\n", (a | b));
    printf("Bitwise XOR : %d\n", (a ^ b));
    printf("Bitwise NOT of a : %d\n", (~a));
    printf("Bitwise NOT of b : %d\n", (~b));
    return 0;
}
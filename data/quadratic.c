// WAP to find the determinant of a quadratic expression
#include <stdio.h>
int main(){
    int a, b, c,d;
    printf("Enter the value of a, b, c : ");
    scanf("%d %d %d", &a, &b, &c);
    d = b * b - 4 * a * c;
    printf("The value of determinant : %d", d);
    return 0;
}
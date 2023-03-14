// WAP to calculate area of a triangle
#include <stdio.h>
int main(){
    float b, h, a;
    printf("Enter height and base of triangle ");
    scanf("%f %f", &h, &b);
    a = 0.5 * b * h;
    printf("Area of triangle is : %f", a);
    return 0;
}
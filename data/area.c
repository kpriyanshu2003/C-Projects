// WAP to find area of circle, rectangle and square
#include <stdio.h>
int main(){
    float a,r,b;
    printf("Enter radius of circle : ");
    scanf("%f", &r);
    a = 3.14 * r * r;
    printf("Area of circle of radius %f is %f", r, a);
    printf("\nEnter the lenght and breadth of rectangle : ");
    scanf("%f %f", &r, &b);
    a = r * b;
    printf("The area of rectangle is %f", a);
    printf("\nEnter the side of square : ");
    scanf("%f", &r);
    a = r * r;
    printf("Area of square is %f", a);
    return 0;
}
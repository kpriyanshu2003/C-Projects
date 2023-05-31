// WAP to calculate area of triangle
#include <stdio.h>
int main()
{
    float b, h;
    printf("Enter the base and height of the triangle : ");
    scanf("%f %f", &b, &h);
    printf("The area of the triangle is : %.3f\n", (0.5 * b * h));
    return 0;
}

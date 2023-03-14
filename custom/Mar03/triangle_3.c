// WAP to calculate area of triangle when all three sides are given. Also find its perimeter
#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, s, area;
    printf("Enter the sides of triangle : ");
    scanf("%f %f %f", &a, &b, &c);
    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("Area of triangle is : %lf\n", area);
    printf("Perimeter of triangle is : %lf\n", (s * 2));
    return 0;
}

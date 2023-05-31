// WAP to accept the diagonal of a square.Find and display the area and perimeter of the square.
#include <stdio.h>
#include <math.h>
int main()
{
    int d;
    float s;
    printf("Enter the diagonal of sqaure : ");
    scanf("%d", &d);
    s = d / sqrt(2);
    printf("Area of square : %f", (s * s));
    printf("\nPerimeter of square : %f", (4 * s));
    return 0;
}
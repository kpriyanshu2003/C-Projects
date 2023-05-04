// WAP to calculate area of a circle

#include <stdio.h>
int main()

{
    float r;
    printf("Enter the radius of the circle: ");
    scanf("%f", &r);
    printf("The area of the circle is: %.3f square units\n", (3.14 * (r * r)));
    return 0;
}

// WAP to find centigrade for a given Fahrenheit temperature
#include <stdio.h>
int main()
{
    float f, c;
    printf("Input temperature in Fahrenheit: ");
    scanf("%f", &f);
    c = (f - 32) * 5.0 / 9.0;
    printf("Temperature in centigrade is %.3f\n", c);
    return 0;
}

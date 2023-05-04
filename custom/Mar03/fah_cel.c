// Write a program to find celcius for a given fahrenheit temperature
#include <stdio.h>
int main()
{
    float c, f;
    printf("Enter temperature in fahrenheit : ");
    scanf("%f", &f);
    c = 5 * ((f - 32) / 9);
    printf("The temperature in celcius is : %lf\n", c);
    return 0;
}
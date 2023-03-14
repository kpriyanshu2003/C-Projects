// Write a program to find centigrade for a given fahrenheit temperature
#include <stdio.h>
int main(){
    float c, f;
    printf("Enter temperature in fahrenheit : ");
    scanf("%f", &f);
    c = (f - 32) * (5 / 9);
    printf("The temperature in celcius is : %f", c);
    return 0;
}
// Write a program to find fahrenheit for a given centigrade temperature
#include <stdio.h>
int main(){
    float c, f;
    printf("Enter temperature in centigrade : ");
    scanf("%f", &c);
    f = ((9*c)/5)+32;
    printf("The temperature in fahrenheit is : %f deg F", f);
    return 0;
}
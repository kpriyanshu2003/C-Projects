// WAP to calculate the area of a circle
#include <stdio.h>
int main(){
    float r, a;
    printf("Enter the radius of circle : ");
    scanf("%f", &r);
    a = 3.14 * r * r;
    printf("The area of circle is %f", a);
    return 0;
}
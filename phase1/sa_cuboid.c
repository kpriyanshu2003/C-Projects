// WAP to find the surface area of cuboid
#include <stdio.h>
int main(){
    int l,b,h;
    float sa;
    printf("Enter the length, breadth and height : ");
    scanf("%d %d %d", &l, &b, &h);
    sa = 2 * (l * b + b * h + h * l);
    printf("The surface area of cuboid is : %f", sa);
    return 0;
}
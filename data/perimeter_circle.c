// WAP to find the perimeter of a circle
#include <stdio.h>
int main(){
    int r;
    float p;
    printf("Enter the radius of circle : ");
    scanf("%d", &r);
    p = 2 * 3.14 * r;
    printf("The perimeter of circle is : %f", p);
    return 0;
}
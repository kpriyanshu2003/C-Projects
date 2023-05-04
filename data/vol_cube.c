// WAP to find the volume of cube
#include <stdio.h>
int main()
{
    int num;
    float v;
    printf("Enter the side of cube : ");
    scanf("%d", &num);
    v = num * num * num;
    printf("Volume of cube is : %f", v);
    return 0;
}
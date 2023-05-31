// WAP to calculate simple interest
#include <stdio.h>
int main(){
    int p, t;
    float i, r;
    printf("Enter principal, rate and time : ");
    scanf("%d %d %d", &p, &r, &t);
    i = (p * r * t) / 100;
    printf("Simple Interest is  %d", i);
    return 0;
}
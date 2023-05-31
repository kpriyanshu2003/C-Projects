// WAP to enter the principal, time and rate of interest, then calculate compound interest
#include <stdio.h>
#include <math.h>
int main(){
    float r,interest, amount,p, t;
    printf("Enter principal, rate and time : ");
    scanf("%f %f %f", &p, &r, &t);
    amount = p * pow((1+ (r/100)), t);
    interest = amount - p;
    printf("Interest is %f",interest);
    return 0;
}
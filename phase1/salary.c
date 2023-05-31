// WAP to input the basic salary of an employee. 
// From the basic calculate the DA (60% of basic), HRA ( 15% of basic) and Gross salary (Basic + DA + HRA)
#include <stdio.h>
int main(){
    float da, b, hra, g;
    printf("Enter basic salary : ");
    scanf("%f", &b);
    da = 0.6 * b;
    hra = 0.15 * b;
    g = b + da + hra;
    printf("Basic Salary : %f\n", b);
    printf("DA : %f\n", da);
    printf("HRA : %f\n", hra);
    printf("Gross Salary : %f", g);
    return 0;
}
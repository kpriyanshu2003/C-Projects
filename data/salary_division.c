// An employee contributes 12% of salary to the Provident fund. Of the remaining salary, he spends 10% on house rent and 20% on education of the children. Write a program to input salary and calculate:
// i) The amount deducted as provident fund
// ii) The amount spent on rent and education
#include <stdio.h>

int main()
{
    float salary, pf_deduction, rent, education;
    printf("Enter salary: ");
    scanf("%f", &salary);
    pf_deduction = salary * 0.12;
    rent = salary * 0.10;
    education = salary * 0.20;
    printf("The amount deducted as provident fund is: %f\n", pf_deduction);
    printf("The amount spent on rent is: %f\n", rent);
    printf("The amount spent on education is: %f\n", education);
    return 0;
}
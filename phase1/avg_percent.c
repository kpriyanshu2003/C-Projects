// WAP to find the average marks of 5 subjects of a student and find the percentage. Assume full marks of each subject is 100
#include<stdio.h>
int main(){
    int sub1, sub2, sub3, sub4, sub5;
    float avg, percent;
    printf("Enter marks in 5 subjects : ");
    scanf("%d %d %d %d %d", &sub1, &sub2, &sub3, &sub4, &sub5);
    avg = (sub1 + sub2 + sub3 + sub4 + sub5) / 5;
    percent = ((sub1+sub2+sub3+sub4+sub5)*100)/500;
    printf("Average : %f\n", avg);
    printf("Percentage : %f", percent);
    return 0;
}
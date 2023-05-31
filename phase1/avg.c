// WAP to accept three subjects marks and display their average
#include <stdio.h>
int main(){
    int sub1, sub2, sub3;
    float avg;
    printf("Enter marks in 3 subjects : ");
    scanf("%d %d %d", &sub1, &sub2, &sub3);
    avg = (sub1 + sub2 + sub3) / 3;
    printf("Average marks : %f", avg);
    return 0;
}
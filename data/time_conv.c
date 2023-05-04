// WAP to convert seconds to hours, minutes and seconds
#include <stdio.h>
int main(){
    int s, m, h;
    printf("Enter time in seconds : ");
    scanf("%d", &s);
    m = s / 60;
    s = s % 60;
    h = m / 60;
    m = m % 60;
    printf("The time is : %d hours %d minutes %d seconds", h,m, s);
    return 0;
}
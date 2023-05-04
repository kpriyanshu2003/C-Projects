// WAP to add two times
#include <stdio.h>
int main(){
    int h1, m1, s1, h2, m2, s2, hour, minute, second;
    printf("Enter time in format hh:mm:ss : ");
    scanf("%d:%d:%d", &h1, &m1, &s1);
    printf("Enter time in format hh:mm:ss : ");
    scanf("%d:%d:%d", &h2, &m2, &s2);
    second = s1 + s2;
    minute = second / 60;
    second = second % 60;
    minute = minute + m1 + m2;
    hour = minute / 60;
    minute = minute % 60;
    hour = hour + h1 + h2;
    printf("%d hours %d minutes %d seconds", hour, minute, second);
    return 0;
}
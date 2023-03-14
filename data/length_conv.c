// WAP to convert metres into km and m
#include <stdio.h>
int main(){
    int m,k;
    printf("Enter distance in metres : ");
    scanf("%d", &m);
    k = m / 1000;
    m = m % 1000;
    printf("The length is %d km %d m", k, m);
}
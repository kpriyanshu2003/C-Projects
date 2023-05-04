// WAP to convert given paisa into its equivalent rupee and paisa as per the following format
// 550 paisa = 5 Ruppee and 50 paisa
#include <stdio.h>
int main(){
    int m, r, p;
    printf("Enter money in paisa : ");
    scanf("%d", &m);
    r = m / 100;
    p = m % 100;
    printf("The money is %d rupee %d paisa", r, p);
    return 0;
}
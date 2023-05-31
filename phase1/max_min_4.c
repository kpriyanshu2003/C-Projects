// WAP to find max and min among 4 numbers
#include <stdio.h>
int main(){
    int max1, max2, min1, min2, num1, num2, num3, num4;
    printf("Enter 4 numbers : ");
    printf("%d %d %d %d", &num1, &num2, &num3, &num4);
    if(num1 < num2){
        max1 = num2;
        min1 = num1;
    }
    else if(num1 > num2){
        max1 = num1;
        min1 = num2;
    }
    else{
        max1 = num1;
        min1 = num1;
    }

    if(num3 < num4){
        max2 = num4;
        min2 = num3;
    }
    else if(num3 > num4){
        max2 = num3;
        min2 = num4;
    }
    else{
        max2 = num3;
        min2 = num3;
    }
    if(max1 < max2)
        max1 = max2;
    if(min1 > min2)
        min1 = min2;
    printf("Maximum of 4 numbers is %d", max1);
    printf("Minimum of 4 numbers is %d", min1);
    return 0;
}
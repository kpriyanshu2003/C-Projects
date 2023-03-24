// WAP using while loop to find the sum of digits of a number 
#include <stdio.h>
int main(){
int s= 0, num, d;
	printf("Enter a number : ");
	scanf("%d",&num);
	while(num != 0){
	d = num % 10;
	s = s + d;
	num /= 10;
	}
	printf("The sum of digits is : %d",s);
	return 0;
}

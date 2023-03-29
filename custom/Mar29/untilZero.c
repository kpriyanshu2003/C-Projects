// WAP to add numbers until the user enters 0 (zero)
#include <stdio.h>
int main(){
	double n, s = 0;
	do{
	printf("Enter a number to add : ");
	scanf("%lf",&n);
	s += n;
	}
	while( n != 0.0);
	printf("The sum of numbers entered : %lf",s);
	return 0;
}

// WAP to swap two numbers without arithmetic operators
#include <stdio.h>
int main(){
	int a, b;
	printf("Enter two numbers : ");
	scanf("%d %d", &a, &b);
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("After swapping : %d %d",a,b);
	return 0;
}

// WAP to swap two numbers without using third variable and addition and subtraction
#include <stdio.h>
int main()
{
	int a, b;
	printf("Enter two numbers : ");
	scanf("%d %d", &a, &b);
	a = a * b;
	b = a / b;
	a = a / b;
	printf("After swapping : %d\n", a);
	printf("After swapping : %d\n", b);
	return 0;
}

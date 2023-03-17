// WAP to show associativity of operators

#include <stdio.h>
int main()
{
	int a;
	int b = 4;
	int c = 8;
	int d = 2;
	int e = 4;
	int f = 2;
	a = b + c / d + e * f;
	printf("The value of a is %d\n", a);

	a = (b + c) / d + e * f;
	printf("The value of a is %d\n", a);

	a = b + c / ((d + e) * f);

	return 0;
}

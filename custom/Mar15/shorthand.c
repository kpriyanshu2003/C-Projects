// WAP to test out all assignment operators
#include <stdio.h>
int main()
{
	int a = 10, b = 20, c = 30, d = 75;
	a += b;
	b -= a;
	c *= 2;
	c -= b;
	d %= a;
	printf("The value of a : %d\n", a);
	printf("The value of a : %d\n", b);
	printf("The value of a : %d\n", c);
	printf("The value of a : %d\n", d);
	return 0;
}

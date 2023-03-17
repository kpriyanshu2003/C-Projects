// WAP to print largest number among three numbers

#include <stdio.h>
int main()
{
	int a, b, c, max;
	printf("Enter three numbers : ");
	scanf("%d %d %d", &a, &b, &c);
	max = a;
	if (b > max)
		max = b;
	if (c > max)
		max = c;
	printf("Largest number is %d", max);
	return 0;
}

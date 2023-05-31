// WAP to find the roots of a quadratic equation ax2 + bx + c = 0 using if else statements
#include <stdio.h>
#include <math.h>
int main()
{
	float a, b, c, d, r, x1, x2;
	printf("Enter the values for a, b ,c : ");
	scanf("%f %f %f", &a, &b, &c);
	d = b * b - 4 * a * c;
	if (d == 0)
	{
		printf("The roots are real and equal\n");
		x1 = x2 = -b / (2 * a);
		printf("The roots are :\n %.2f and %.2f", x1, x2);
	}
	else if (d > 0)
	{
		printf("The roots are real and unequal\n");
		x1 = (-b + sqrt(d)) / (2 * a);
		x2 = (-b - sqrt(d)) / (2 * a);
		printf("The roots are :\n %.2f and %.2f", x1, x2);
	}
	else
	{
		printf("The roots are imaginary\n");
		x1 = -b / (2 * a);
		d = -d;
		x2 = sqrt(d) / (2 * a);
		printf("The roots are :\n %.2f + i%.2f", x1, x2);
		printf(" and %.2f - i%.2f", x1, x2);
	}
	return 0;
}

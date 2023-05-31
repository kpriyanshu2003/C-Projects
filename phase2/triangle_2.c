// WAP to enter base and height of triangle and find its area
#include <stdio.h>
int main()
{
	float b, h;
	printf("Enter base and height of triangle : ");
	scanf("%f %f", &b, &h);
	printf("Area : %f\n", (0.5 * b * h));
	return 0;
}

// WAP to find the roots of quadratic equation
#include <stdio.h>
#include <math.h>
int main(){
	float a, b, c, d, x1, x2;
	printf("Enter the value of a, b, c is ax^2 + bx + c = 0 : ");
	scanf("%f %f %f", &a, &b, &c);
	d = pow(b, 2) - 4 * a * c;
	x1 = -b + sqrt(d);
	x2 = -b - sqrt(d);
	printf("The roots are :\n");
	printf("x1 : %f\n", x1);
	printf("x2 : %f\n", x2);
	return 0;
}

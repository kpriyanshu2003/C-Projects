// WAP to input length and breadth and display its area and perimeter
#include <stdio.h>
int main(){
	float l, b;
	printf("Enter length and breadth of rectangle : ");
	scanf("%f %f", &l, &b);
	printf("Area %f\n", ( l * b ));
	printf("Perimeter %f\n", ( 2 * ( l + b )));
	return 0;
}

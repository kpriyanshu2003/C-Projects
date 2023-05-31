// WAP to input radius of circle and display its area and circumference
#include <stdio.h>
int main(){
	int r;
	printf("Enter radius of circle : ");
	scanf("%d",&r);
	printf("Area is %f\n", (3.14 * r * r));
	printf("Circumeference is %f\n", (2 * 3.14 * r));
	return 0;
}

// WAP to input price of pen and pencil iin form of rupee and paisa. And add the two

#include <stdio.h>
int main()
{
	int r1, r2, p1, p2, r, p;
	printf("Enter price of pen : ");
	scanf("%d %d", &r1, &p1);
	printf("Enter price of pencil : ");
	scanf("%d %d", &r2, &p2);
	p = p1 + p2;
	r = p / 100;
	p = p % 100;
	r = r1 + r2 + r;
	printf("The sum is : Rs %d and %d p\n", r, p);
	return 0;
}

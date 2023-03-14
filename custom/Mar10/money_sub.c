// WAP to find the difference of two price entered

#include <stdio.h>
#include <math.h>
int main()
{
	int r1, p1, r2, p2, r, p;
	printf("Enter the first price in Rs p : ");
	scanf("%d %d", &r1, &p1);
	printf("Enter the second price in Rs p : ");
	scanf("%d %d", &r2, &p2);
	p = p1 - p2;
	r = r1 - r2;
	printf("Rs %d %dp\n", (int)fabs(r), (int)fabs(p));
	return 0;
}

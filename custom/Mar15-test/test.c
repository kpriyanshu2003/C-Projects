// WAP to enter last two digits and swap them
#include <stdio.h>
int main()
{
	int a, b, n, num;
	printf("Enter last two digits of your roll no : ");
	scanf("%d", &n);
	num = n;
	a = n % 10;
	n = n / 10;
	b = n % 10;
	printf("Swapped : %d %d\n", a, b);
	return 0;
}

// WAP to find reverse of a number
#include <stdio.h>
int main()
{
	int num, d, s = 0;
	printf("Enter a number : ");
	scanf("%d", &num);
	while (num != 0)
	{
		d = num % 10;
		s = s * 10 + d;
		num /= 10;
	}
	printf("The reverse of number is %d", s);
	return 0;
}

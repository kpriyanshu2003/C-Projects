// Hex 2 Bin
#include <stdio.h>
int main()
{
	int n, c = 0, s = 0, num, d;
	printf("Enter a hexadecimal number : ");
	scanf("%x", &n);
	while (n != 0)
	{
		d = n % 10;
		s = s * 10 + d;
		c++;
		n /= 10;
	}
	c--;
	while (s != 0)
	{
		d = s % 10;
		num = num * 10 + d;
		s /= 10;
	}
	int r, bin = 0, bs = 1;

	while (num > 0)
	{
		r = num % 2;
		bin += r * bs;
		bs *= 10;
		num /= 2;
	}

	printf("Binary Number : %d", bin);
	return 0;
}

// WAP to print largest number among thre e numbers

#include <stdio.h>
int main()
{
	int a, b, c, max;
	printf("Enter three numbers : ");
	scanf("%d %d %d", &a, &b, &c);
	if (a > b)
	{
		if (a > c)
			max = a;
		else
			max = c;
	}
	else
	{
		if (b > c)
			max = b;
		else
			max = c;
	}
	printf("Largest number is %d", max);
	return 0;
}

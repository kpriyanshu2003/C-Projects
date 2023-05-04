// WAP using while loop to find even numbers in a range of numbers
#include <stdio.h>
int main()
{
	int a, b;
	printf("Enter start and end of range : ");
	scanf("%d %d", &a, &b);
	printf("Even numbers : \n");
	while (a <= b)
	{
		if (a % 2 == 0)
			printf("%d ", a);
		a++;
	}
	return 0;
}
